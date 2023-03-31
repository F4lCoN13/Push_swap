/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_decimal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:46:07 by paumarc2          #+#    #+#             */
/*   Updated: 2023/03/20 17:02:53 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/headerprintf.h"

int	ft_find_decimal(int nb)
{
	int	lenght;

	lenght = 0;
	ft_putnbr_fd(nb, 1);
	if (nb == 0 || nb < 0)
		lenght = 1;
	while (nb != 0)
	{
		nb = nb / 10;
		lenght += 1;
	}
	return (lenght);
}
