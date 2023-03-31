/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:48:31 by paumarc2          #+#    #+#             */
/*   Updated: 2023/03/20 17:27:36 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/headerprintf.h"

int	ft_find_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_argument_parsing(va_list *args, const char format)
{
	int		lenght;

	lenght = 0;
	if (format == 'c')
		lenght += ft_find_char(va_arg(*args, int));
	else if (format == 's')
		lenght += ft_find_string(va_arg(*args, char *));
	else if (format == 'p')
		lenght += ft_find_size_t(va_arg(*args, size_t));
	else if (format == 'd' || format == 'i')
		lenght += ft_find_decimal(va_arg(*args, int));
	else if (format == 'u')
		lenght += ft_find_unsigned(va_arg(*args, unsigned int));
	else if (format == 'x' || format == 'X')
		lenght += ft_find_hexa(va_arg(*args, unsigned int), format);
	else if (format == '%')
	{
		lenght += 1;
		write(1, "%", 1);
	}
	return (lenght);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		j;
	int		lenght;

	j = 0;
	lenght = 0;
	va_start(args, format);
	while (format[j])
	{
		if (format[j] == '%')
		{
			lenght += ft_argument_parsing(&args, format[j + 1]);
			j++;
		}
		else
			lenght += ft_find_char(format[j]);
		j++;
	}
	va_end(args);
	return (lenght);
}
