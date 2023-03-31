/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:56:40 by paumarc2          #+#    #+#             */
/*   Updated: 2022/12/13 14:12:58 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			a;
	unsigned char	*save;

	a = 0;
	if (s == NULL)
		return (NULL);
	save = (void *)s;
	while (a < n)
	{
		if (save[a] == (unsigned char)c)
		{
			return ((void *)&save[a]);
		}
		a++;
	}
	return (NULL);
}
