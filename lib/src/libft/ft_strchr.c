/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:53:03 by paumarc2          #+#    #+#             */
/*   Updated: 2022/12/07 10:16:12 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	a;

	a = 0;
	if (s == NULL)
		return (NULL);
	while (s[a])
	{
		if (s[a] == (char)c)
		{
			return ((char *)&s[a]);
		}
		a++;
	}
	if (s[a] == (char)c)
		return ((char *)&s[a]);
	return (NULL);
}
