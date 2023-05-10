/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:54:55 by bbessard          #+#    #+#             */
/*   Updated: 2023/05/10 14:29:42 by bbessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Choose sorting algoriothm based on stack size
*/

void choose_sorting(s_list **head_a, s_list **head_b)
{
    int size;
    
    size = list_size(t_list *head_a);
    if (!(isordered(*head_a))
    {
        if (size <= 1)
            return NULL ;
        else if (size  ==  2)
            sa(head_a);
        else if (size == 3)
            sort_3(head_a, 0);
        else if (size == 4)
            sort_4(head_a, head_b, 0);
        else if (size == 5)
            sort_5(head_a, head_b);
        else   
            sort(head_a, head_b);
    }
}
