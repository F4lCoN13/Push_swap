/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:47:06 by paumarc2          #+#    #+#             */
/*   Updated: 2023/03/20 17:16:25 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/headerprintf.h"

int	ft_lenght_num(unsigned int nb)
{
	int	lenght;

	lenght = 0;
	while (nb != 0)
	{
		nb = nb / 10;
		lenght ++;
	}
	return (lenght);
}

char	*ft_tab_num(unsigned int nb)
{
	char	*str;
	int		len_nb;

	len_nb = ft_lenght_num(nb);
	str = (char *)malloc(sizeof(char) * (len_nb + 1));
	if (!str)
		return (NULL);
	str[len_nb] = '\0';
	while (nb != 0)
	{
		str[len_nb - 1] = (nb % 10) + 48;
		nb = nb / 10;
		len_nb--;
	}
	return (str);
}

int	ft_find_unsigned(unsigned int nb)
{
	int		lenght;
	char	*num;

	lenght = 0;
	if (nb == 0)
		lenght += write(1, "0", 1);
	else
	{
		lenght = ft_lenght_num(nb);
		num = ft_tab_num(nb);
		ft_putstr_fd(num, 1);
		free(num);
	}
	return (lenght);
}
