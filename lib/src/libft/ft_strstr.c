/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:59:03 by paumarc2          #+#    #+#             */
/*   Updated: 2023/03/20 16:53:51 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

const char	*ft_strstr(const char *str, char to_find)
{
	if (to_find == '\0')
		return (str);
	while (*str)
	{
		if (*str == to_find)
			return (str);
		str++;
	}
	return (str);
}
