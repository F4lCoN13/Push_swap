/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:55:45 by paumarc2          #+#    #+#             */
/*   Updated: 2022/12/13 14:24:58 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	a;

	a = 0;
	if (n != 0)
	{
		while (s1[a] == s2[a] && n != 1 && s1[a] && s2[a])
		{
			a++;
			n--;
		}
		return (s1[a] - s2[a]);
	}
	return (0);
}
