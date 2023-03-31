/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:00:07 by paumarc2          #+#    #+#             */
/*   Updated: 2022/12/13 14:11:31 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*sct;

	sct = malloc(sizeof((t_list) * (sct)));
	if (!sct)
		return (NULL);
	sct->content = content;
	sct->next = NULL;
	return (sct);
}
