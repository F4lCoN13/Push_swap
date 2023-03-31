/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:57:03 by paumarc2          #+#    #+#             */
/*   Updated: 2022/12/13 14:13:41 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned long long	i;
	const unsigned char	*sa;
	const unsigned char	*sb;

	sa = s1;
	sb = s2;
	i = 0;
	if (n == 0 || s1 == s2)
		return (0);
	while (i < n)
	{
		if (sa[i] != sb[i])
			return ((int)sa[i] - sb[i]);
		i++;
	}
	return (0);
}
