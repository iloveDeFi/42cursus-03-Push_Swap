/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:35:27 by bbessard          #+#    #+#             */
/*   Updated: 2023/02/21 11:37:00 by bbessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_stacks(t_elements *ps)
{
	ps->stack_a = malloc(sizeof(int) * ps->size_a);
	if (!ps->stack_a)
		error();
	ps->stack_b = malloc(sizeof(int) * ps->size_b);
	if (!ps->stack_b)
		error();
}


void	init_stack(t_elements *s)
{
	int	size;
	int	i;

	s->tmp = malloc(sizeof(long) * s->size_a);
	i = 0;
	size = s->size_a;
	while (i < size)
	{
		s->tmp[i] = s->stack_a[i];
		i++;
	}
}
