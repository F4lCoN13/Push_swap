/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:02:39 by paumarc2          #+#    #+#             */
/*   Updated: 2022/12/13 14:12:16 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_lstsize(t_list *lst)
{
	int			i;
	t_list		*tempo;

	tempo = lst;
	i = 0;
	while (tempo)
	{
		tempo = tempo->next;
		i++;
	}
	return (i);
}
