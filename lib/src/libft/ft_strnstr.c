/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:57:29 by paumarc2          #+#    #+#             */
/*   Updated: 2022/12/13 14:27:34 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (little[i])
		i++;
	if (i == 0)
		return ((char *)big);
	i = 0;
	while (big[i] && i < n)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while ((big[i + j] == little[j] && little[j])
				&& (i + j < n) && big[i + j])
				j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}
