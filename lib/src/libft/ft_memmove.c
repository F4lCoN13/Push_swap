/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:51:23 by paumarc2          #+#    #+#             */
/*   Updated: 2022/12/07 11:00:52 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned long long	a;
	char				*back;
	const char			*s;

	a = n - 1;
	back = dest;
	s = src;
	if (s < back)
	{
		while (a > 0)
		{
			back[a] = s[a];
			a--;
		}
		back[a] = s[a];
		return (dest);
	}
	else
	{
		ft_memcpy(dest, src, n);
		return (dest);
	}
}
