/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:24:17 by paumarc2          #+#    #+#             */
/*   Updated: 2022/12/13 14:51:40 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	begin;
	size_t	end;
	char	*result;
	int		i;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	begin = 0;
	while (s1[begin] != '\0' && ft_strchr(set, s1[begin]))
		begin++;
	end = ft_strlen(s1);
	while (end > begin && ft_strchr(set, s1[end - 1]))
		end--;
	result = malloc(sizeof(char) * (end - begin + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (begin < end)
		result[i++] = s1[begin++];
	result[i] = '\0';
	return (result);
}
