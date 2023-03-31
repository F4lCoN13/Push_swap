/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_size_t.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:46:38 by paumarc2          #+#    #+#             */
/*   Updated: 2023/03/28 15:12:06 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/headerprintf.h"

void	ft_print_size_t_in_hexa(size_t nb)
{
	if (nb >= 16)
	{
		ft_print_size_t_in_hexa(nb / 16);
		ft_print_size_t_in_hexa(nb % 16);
	}
	else
	{
		if (nb <= 9)
			ft_putchar_fd((nb + '0'), 1);
		else
			ft_putchar_fd(((nb - 10) + 'a'), 1);
	}
}

int	ft_count_size_t_in_hexa(size_t nb)
{
	int	lenght;

	lenght = 0;
	while (nb && nb >= 16)
	{
		nb /= 16;
		lenght += 1;
	}
	if (nb > 0)
		lenght += 1;
	return (lenght);
}

int	ft_find_size_t(size_t nb)
{
	int	lenght;

	lenght = 0;
	if (nb == 0)
	{
		if (NULL_OS == 1)
			lenght += write(1, "0x0", 3);
		else
			lenght += write(1, "(nil)", 5);
	}
	else if (nb > 0)
	{
		lenght += write(1, "0x", 2);
		ft_print_size_t_in_hexa(nb);
		lenght += ft_count_size_t_in_hexa(nb);
	}
	return (lenght);
}
