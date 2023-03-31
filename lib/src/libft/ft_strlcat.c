/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:52:01 by paumarc2          #+#    #+#             */
/*   Updated: 2022/12/07 10:18:26 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned long long	i;
	unsigned long long	destlen;
	unsigned long long	srclen;

	i = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (size <= destlen)
		return (srclen + size);
	while (src[i] && i < (size - destlen - 1))
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = src[srclen];
	return (srclen + destlen);
}
