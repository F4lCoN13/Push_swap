/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:22:52 by paumarc2          #+#    #+#             */
/*   Updated: 2022/12/13 14:16:13 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	if (n >= 0)
		nbr = n;
	if (n < 0)
	{
		nbr = n * -1;
		write(fd, "-", 1);
	}
	if (nbr <= 9)
		ft_putchar_fd((nbr % 10) + 48, fd);
	else
	{	
		ft_putnbr_fd((nbr / 10), fd);
		ft_putchar_fd(((nbr % 10) + 48), fd);
	}
}
