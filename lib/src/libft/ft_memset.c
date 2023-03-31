/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:46:52 by paumarc2          #+#    #+#             */
/*   Updated: 2022/12/07 10:11:02 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	char				*try;
	unsigned long long	a;

	a = 0;
	try = s;
	while (a < len)
	{
		*try = c;
		try++;
		a++;
	}
	return (s);
}
