/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:07:47 by paumarc2          #+#    #+#             */
/*   Updated: 2022/12/13 14:05:57 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static short	ft_size(int n)
{
	short			i;
	unsigned int	nb;

	i = 0;
	if (n < 0)
	{
		i += 1;
		nb = n * -1;
	}
	else
		nb = n;
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

static char	*ft_feed(char *ptr, short i, int n)
{
	unsigned int	max;

	if (n > 0)
	{
		ptr[i--] = '\0';
		while (i >= 0)
		{
			ptr[i] = ((n % 10) + 48);
			n = n / 10;
			i--;
		}
		return (ptr);
	}
	ptr[i--] = '\0';
	max = n * -1;
	while (i > 0)
	{
		ptr[i] = ((max % 10) + 48);
		max = max / 10;
		i--;
	}
	ptr[i] = '-';
	return (ptr);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	short	i;

	if (n == 0)
		return (ft_strdup("0"));
	i = ft_size(n);
	ptr = malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
	ptr = ft_feed(ptr, i, n);
	return (ptr);
}
