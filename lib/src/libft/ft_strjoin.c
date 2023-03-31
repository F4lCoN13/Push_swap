/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:03:03 by paumarc2          #+#    #+#             */
/*   Updated: 2022/12/13 14:21:30 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		total_len;
	size_t		i;
	size_t		j;
	char		*ptr;

	if (s1 && s2)
	{
		total_len = ft_strlen(s2) + ft_strlen(s1) + 1;
		ptr = malloc(total_len);
		if (!ptr)
			return (NULL);
		i = -1;
		j = -1;
		while (s1[++i])
			ptr[i] = s1[i];
		while (s2[++j])
			ptr[i + j] = s2[j];
		ptr[i + j] = '\0';
		return (ptr);
	}
	return (NULL);
}
