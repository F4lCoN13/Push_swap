/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:46:25 by paumarc2          #+#    #+#             */
/*   Updated: 2023/03/28 15:26:30 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/headerprintf.h"

int	ft_hexa_len(unsigned int nb)
{
	int	lenght;

	lenght = 0;
	while (nb != 0)
	{
		nb = nb / 16;
		lenght+= 1;
	}
	return (lenght);
}

void	ft_print_hexa(unsigned int nb, const char format)
{
	if (nb >= 16)
	{
		ft_print_hexa(nb / 16, format);
		ft_print_hexa(nb % 16, format);
	}
	else
	{
		if (nb <= 9)
			ft_putchar_fd((nb + 48), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd(((nb - 10) + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd(((nb - 10) + 'A'), 1);
		}
	}
}

int	ft_find_hexa(unsigned int nb, const char format)
{
	if (nb == 0)
		return (write(1, "0", 1));
	else
		ft_print_hexa(nb, format);
	return (ft_hexa_len(nb));
}
