/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:18:19 by paumarc2          #+#    #+#             */
/*   Updated: 2023/02/02 14:22:52 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/get_next_line.h"

char	*ft_clean_buffer(char *buffer)
{
	int		i;
	int		j;
	char	*new_buffer;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	new_buffer = ft_calloc_gnl((ft_strlen(buffer) - i + 1), 1);
	if (!new_buffer)
		return (NULL);
	i += 1;
	j = 0;
	while (buffer[i])
		new_buffer[j++] = buffer[i++];
	free(buffer);
	return (new_buffer);
}

char	*ft_clean_line(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = ft_calloc(i + 2, 1);
	if (!line)
		return (NULL);
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] && buffer[i] == '\n')
	line[i++] = '\n';
	return (line);
}

char	*ft_feed_and_free_res(char *res, char *buffer)
{
	char	*temp;

	temp = ft_strjoin_gnl(res, buffer);
	free(res);
	return (temp);
}

char	*ft_feed_with_line(char *buffer, int fd)
{
	int		size;
	char	*res;

	if (!buffer)
		buffer = ft_calloc(1, 1);
	res = ft_calloc_gnl(1, BUFFER_SIZE + 1);
	if (!res)
		return (NULL);
	size = 1;
	while (size > 0)
	{
		size = read(fd, res, BUFFER_SIZE);
		if (size == -1)
		{
			free(buffer);
			return (NULL);
		}
		res[size] = '\0';
		buffer = ft_feed_and_free_res(buffer, res);
		if (ft_strrchr_gnl(res, '\n'))
			break ;
	}
	free(res);
	return (buffer);
}

char	*get_next_line(int fd)
{
	static char		*buffer[FOPEN_MAX];
	char			*line;

	if (BUFFER_SIZE <= 0 || fd > FOPEN_MAX || fd < 0 || read(fd, 0, 0) < 0)
		return (NULL);
	buffer[fd] = ft_feed_with_line(buffer[fd], fd);
	if (!buffer[fd])
		return (NULL);
	line = ft_clean_line(buffer[fd]);
	buffer[fd] = ft_clean_buffer(buffer[fd]);
	return (line);
}
