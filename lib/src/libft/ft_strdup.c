/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:58:23 by paumarc2          #+#    #+#             */
/*   Updated: 2022/12/13 14:18:06 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strdup(const char *s)
{
	size_t		i;
	char		*new;

	i = ft_strlen(s) + 1;
	new = malloc(sizeof(char) * i);
	if (!new)
		return (NULL);
	ft_bzero(new, i);
	ft_strlcpy(new, s, i);
	return (new);
}
