/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:25:27 by paumarc2          #+#    #+#             */
/*   Updated: 2023/02/02 14:27:44 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>

char			*get_next_line(int fd);
void			ft_bzero_gnl(void *s, int n);
char			*ft_strjoin_gnl(char *s1, char *s2);
void			*ft_calloc_gnl(int nmemb, int size);
char			*ft_strrchr_gnl(const char *s, int c);
#endif
