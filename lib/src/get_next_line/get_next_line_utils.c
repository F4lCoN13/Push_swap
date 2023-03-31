/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:10:21 by paumarc2          #+#    #+#             */
/*   Updated: 2023/02/02 14:11:30 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/get_next_line.h"

char	*ft_strrchr_gnl(const char *s, int c)
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

void	*ft_calloc_gnl(int nmemb, int size)
{
	void			*ptr;

	if (nmemb > INT_MAX / size)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	ptr = malloc((size) * (nmemb));
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	int			total_len;
	int			i;
	int			j;
	char		*ptr;

	if (s1 && s2)
	{
		total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
		ptr = malloc(total_len);
		if (!ptr)
			return (NULL);
		i = -1;
		j = -1;
		while (s1[++i])
			ptr[i] = s1[i];
		while (s2[++j])
		{
			ptr[i + j] = s2[j];
		}
		ptr[i + j] = '\0';
		return (ptr);
	}
	return (NULL);
}

void	ft_bzero_gnl(void *s, int n)
{
	int		a;
	char	*t;

	a = 0;
	t = s;
	while (a < n)
	{
		t[a] = '\0';
		a++;
	}
}
