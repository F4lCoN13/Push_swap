/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 09:14:16 by paumarc2          #+#    #+#             */
/*   Updated: 2022/09/14 10:55:37 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_putnbr(int nb)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar_fd(('-'), 1);
		n = nb * -1;
	}
	else
		n = nb;
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar_fd(((n % 10) + 48), 1);
	}
	if (n < 10)
		ft_putchar_fd((n + 48), 1);
}
