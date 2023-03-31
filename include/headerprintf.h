/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headerprintf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <paumarc2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:31:20 by paumarc2          #+#    #+#             */
/*   Updated: 2023/03/28 15:11:58 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERPRINTF_H
# define HEADERPRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdarg.h>
# include "libft.h"
# include "get_next_line.h"
# include "get_next_line_bonus.h"

# ifdef __APPLE__
#  define NULL_OS 1
# else
#  define NULL_OS 2
#endif
typedef struct s_len
{
	int		len;
	int		width;
}				t_len;

int		ft_printf(const char *format, ...);
int		ft_find_string(char *str);
int		ft_find_size_t(size_t nb);
int		ft_find_decimal(int nb);
int		ft_find_unsigned(unsigned int nb);
int		ft_find_hexa(unsigned int nb, const char format);

#endif
