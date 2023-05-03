/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:47:24 by paumarc2          #+#    #+#             */
/*   Updated: 2023/05/03 16:08:40 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/headerpush_swap.h"

////////////////////////////////////////////////////////////////////////////////
/////////////FR: Fonctions qui sert a cree et ajouter des maillons//////////////
///////////EN: Function that serve to creates and add get other node////////////
////////////////////////////////////////////////////////////////////////////////
void	ft_delete(int	pst, t_chain **head)
{
	t_chain	*p;
	int i;
	
	p = (*head);
	i = 0;
	ft_printf("\ncoucou & p = %d", p->index);
	while (i < pst - 1)
	{
		p = p->next;
		i++;
	}
	ft_printf("\ncoucou & p = %d", p->index);
	if ((p->next->next != NULL) && (p->next != NULL))
	{
		p->next = p->next->next;
		p->next->prev = p;
	}
	else
		p->next = NULL;
	ft_printf("\ncoucou & p = %d", p->index);
	return ;
}

////////////////////////////////////////////////////////////////////////////////
/////////////FR: Fonctions qui sert a cree et ajouter des maillons//////////////
///////////EN: Function that serve to creates and add get other node////////////
////////////////////////////////////////////////////////////////////////////////
void	ft_2_sa(t_chain **head, t_chain **tail)
{
	t_chain *tmp;

	tmp = *tail;
    *tail = (*tail)->prev;
    (*tail)->next = NULL;
    tmp->prev = NULL;
    tmp->next = *head;
    (*head)->prev = tmp;
    *head = tmp;
}

////////////////////////////////////////////////////////////////////////////////
/////////////FR: Fonctions qui sert a cree et ajouter des maillons//////////////
///////////EN: Function that serve to creates and add get other node////////////
////////////////////////////////////////////////////////////////////////////////
int	ft_sa(t_chain **head, t_chain **tail)
{
	t_chain *p;
	//t_chain *tmp;

	p = (*head);
	//tmp = p->next;
	ft_printf("\nhead = %d\ntail = %d\np = %d\n", (*head)->nb, (*tail)->nb, p->nb);
	if (*tail == p->next)
		ft_2_sa(head, tail);
	/*p->next = NULL;
	tmp->next = NULL;
	tmp->prev = NULL;
	free(tmp);
	ft_delete(1, head);
	tmp->prev = NULL;
	tmp->next = (*head);
	(*head)->prev = tmp;
	(*head) = tmp;*/
	ft_printf("\nhead = %d\ntail = %d\np = %d\n", (*head)->nb, (*tail)->nb, p->nb);
	return (0);
}
