/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:46:53 by paumarc2          #+#    #+#             */
/*   Updated: 2023/03/20 17:12:16 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/headerprintf.h"

int	ft_find_string(char *str)
{
	if (!str)
	{
		ft_putstr("(null)");
		return (6);
	}
	else
		ft_putstr(str);
	return (ft_strlen(str));
}
