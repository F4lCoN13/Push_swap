/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:41:32 by paumarc2          #+#    #+#             */
/*   Updated: 2023/06/16 15:41:35 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/headerpush_swap.h"

t_chain  *find_highest(t_chain *head)
{
   int      highest;
   t_chain  *highest_node;

   highest = 0;
   if (NULL == head)
      return (NULL);
   while (head != NULL)
   {
      if (head->index > highest)
      {
         highest = head->index;
         highest_node = head;
      }
      head = head->next;
   }
   return (highest_node);
}

t_chain  *find_lowest(t_chain *head)
{
   int      lowest;
   t_chain  *lowest_node;

   lowest = 1000;
   if (NULL == head)
      return (NULL);
   while (head != NULL)
   {
      if (head->index < lowest)
      {
         lowest = head->index;
         lowest_node = head;
      }
      head = head->next;
   }
   return (lowest_node);
}
