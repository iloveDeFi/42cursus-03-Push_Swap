/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:10:35 by bbessard          #+#    #+#             */
/*   Updated: 2023/05/09 16:10:53 by bbessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** We normalize to give a smaller value of each element of the stack.
** Thus we have a more efficient radix sort
** We fill in the stack A with the calculated indexes 
** [3, 2, 6, 1, 4] become [1, 2, 3, 4, 6] become [0, 1, 2, 3, 4]
*/

void	ft_normalize(t_elements *s)
{
	int	i;
	int	j;
	int	count;

	init_stack(s);
	i = -1;
	while (++i < s->size_a)
		s->tmp[i] = s->stack_a[i];
		i = 0;
	while (i < s->size_a)
	{
		j = -1;
		count = -1;
		while (++j < s->size_a)
		{
			if (s->tmp[i] < s->tmp[j])
				count++;
		}
		s->stack_a[i] = ((s->size_a - 1) - count);
		i++;
	}
	free (s->tmp);
}
