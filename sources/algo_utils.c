/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:50:25 by bbessard          #+#    #+#             */
/*   Updated: 2023/02/28 13:12:46 by bbessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_alg_help(t_elements *s)
{
	ft_rotate_a(s);
	ft_swap_a(s);
	ft_reverse_rotate_a(s);
}

void	push_up(t_elements *s)
{
	if (s->small_i < (s->size_a / 2))
	{
		s->i = 0;
		while (s->i < s->small_i)
		{
			ft_rotate_a(s);
			s->i++;
		}
	}
	else if (s->small_i >= (s->size_a / 2))
	{
		s->i = s->size_a;
		while (s->i > s->small_i)
		{
			ft_reverse_rotate_a(s);
			s->i--;
		}
	}
}

void	find_smallest(t_elements	*s)
{
	s->i = 1;
	s->small_i = 0;
	s->min = s->stack_a[0];
	while (s->i < s->size_a)
	{
		if (s->stack_a[s->i] < s->min)
		{
			s->min = s->stack_a[s->i];
			s->small_i = s->i;
			s->i = 1;
		}
		s->i++;
	}
}
