/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:23:47 by paumarc2          #+#    #+#             */
/*   Updated: 2022/12/13 14:17:12 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

typedef struct s_sct
{
	int		i;
	int		j;
	int		cnt;
	int		n;
	int		k;
}	t_sct;

static int	new_tab(char const *s, char c)
{
	t_sct	sct;

	sct.i = 0;
	sct.j = 0;
	while (s[sct.i])
	{
		if (s[sct.i] != c && (s[sct.i + 1] == c || s[sct.i + 1] == '\0'))
			sct.j++;
		sct.i++;
	}
	return (sct.j);
}

static void	ft_feed_all(char **ptr, int total, char	const *s, char c)
{
	t_sct	sct;

	sct.i = 0;
	sct.j = 0;
	while (sct.i < total)
	{
		sct.cnt = 0;
		sct.k = 0;
		while (s[sct.j] == c)
			sct.j++;
		sct.n = sct.j;
		while (s[sct.j] != c && s[sct.j] != 0)
		{
			sct.j++;
			sct.cnt++;
		}
		ptr[sct.i] = malloc(sizeof(char) * (sct.cnt + 1));
		if (!ptr[sct.i])
			return ;
		while (sct.k < sct.cnt)
			ptr[sct.i][sct.k++] = s[sct.n++];
		ptr[sct.i][sct.cnt] = '\0';
		sct.i++;
	}
}

static void	ft_free(char **ptr, int nb_tab)
{
	t_sct	sct;

	sct.i = 0;
	while (sct.i <= nb_tab)
		free(ptr[sct.i++]);
	free(ptr);
}

char	**ft_split(char const *s, char c)
{
	t_sct	sct;
	char	**ptr;

	if (!s)
		return (NULL);
	sct.i = new_tab(s, c);
	ptr = malloc(sizeof(char *) * (sct.i + 1));
	ft_bzero(ptr, sct.i);
	if (ptr == NULL)
		return (NULL);
	ptr[sct.i] = NULL;
	ft_feed_all(ptr, sct.i, s, c);
	sct.j = 0;
	while (sct.j < sct.i)
	{
		if (ptr[sct.j] == NULL)
		{
			ft_free(ptr, sct.i);
			return (NULL);
		}
		sct.j++;
	}
	return (ptr);
}
