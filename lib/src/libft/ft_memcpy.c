/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:51:02 by paumarc2          #+#    #+#             */
/*   Updated: 2022/12/07 10:08:47 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned long long	a;
	char				*try;
	const char			*s;

	a = 0;
	try = dest;
	s = src;
	while (a < n)
	{
		try[a] = s[a];
		a++;
	}
	return (dest);
}
