/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:42:56 by paumarc2          #+#    #+#             */
/*   Updated: 2023/05/03 14:12:56 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/headerpush_swap.h"

////////////////////////////////////////////////////////////////////////////////
/////////////FR: Fonctions qui remplis les nombres des maillons/////////////////
////////////////EN: Function that fill the number of node///////////////////////
////////////////////////////////////////////////////////////////////////////////
void	ft_feed_lst(t_tab *tab, t_chain **head)
{
	int		i;
	t_chain	*p;

	i = 0;
	p = *head;
	while (p != NULL)
	{
		p->nb = tab->t[i];
		i++;
		p = p->next;
	}
}

////////////////////////////////////////////////////////////////////////////////
/////////////FR: Fonctions qui sert a cree et ajouter des maillons//////////////
///////////EN: Function that serve to creates and add get other node////////////
////////////////////////////////////////////////////////////////////////////////
void  ft_free_list(t_chain **head)
{
   t_chain *tmp;
   t_chain *p;

   p  = *head;
   while (p != NULL)
   {
      tmp = p;
      p = p->next;
      free(tmp);
   }
}

////////////////////////////////////////////////////////////////////////////////
/////////////FR: Fonctions qui sert a cree et ajouter des maillons//////////////
///////////EN: Function that serve to creates and add get other node////////////
////////////////////////////////////////////////////////////////////////////////
int   ft_new_node(t_chain **head, t_chain **tail)
{
   t_chain *New_Node;
   
   New_Node = malloc(sizeof(t_chain));
   if (!New_Node)
      return (-1);
   New_Node->next = NULL;
   if (*head == NULL)
   {
      New_Node->prev = NULL;
      *head = New_Node;
      *tail = New_Node;
   }
   else
   {
      New_Node->prev = *tail;
      (*tail)->next = New_Node;
      *tail = New_Node;
   }
   return (1);
}

////////////////////////////////////////////////////////////////////////////////
///FR: lance la creation de la pile A et remplis chaque maillons avec un int////
//////EN: lauch the creation of stack A and fill each node with an integer//////
////////////////////////////////////////////////////////////////////////////////
int  ft_init_list(t_tab *tab, t_chain **head, t_chain **tail)
{
   int i;


   i = 0;
   while (i < (tab->size))
   {
      if (ft_new_node(&*head, &*tail) == -1)
         return (-1);
      i++;
   }
   return (1);
}
