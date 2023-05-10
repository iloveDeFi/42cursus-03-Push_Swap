/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:54:03 by bbessard          #+#    #+#             */
/*   Updated: 2023/05/10 14:21:39 by bbessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Return length of linked list
*/

int list_size(t_list *head)
{
    t_list  *current;
    int count;

    count = 0;
    current = head;
    while (current)
    {
        count++;
        curent = current->next;
    }
    return (count);
}

