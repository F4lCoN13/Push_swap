/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:55:27 by paumarc2          #+#    #+#             */
/*   Updated: 2022/11/22 11:25:04 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		a;
	char	*save;

	a = 0;
	save = NULL;
	if (s == NULL)
		return (NULL);
	while (s[a])
	{
		if (s[a] == (char)c)
			save = (char *)&s[a];
		a++;
	}
	if (s[a] == (char)c)
		return ((char *)&s[a]);
	return (save);
}
