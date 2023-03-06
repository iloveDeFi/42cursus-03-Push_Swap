/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:50:46 by bbessard          #+#    #+#             */
/*   Updated: 2023/03/06 13:45:43 by bbessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_algorithms(t_elements *s)
{
	if (s->size_a == 2)
		two_args_alg(s);
	else if (s->size_a == 3)
		three_int_alg(s);
	else if (s->size_a == 4)
		four_int_alg(s);
	else if (s->size_a == 5)
		five_int_alg(s);
	else if (s->size_a >= 6)
		big_algorithm(s);
}

void	two_args_alg(t_elements *s)
{
	if (s->stack_a[0] > s->stack_a[1])
		ft_swap_a(s);
}

void	three_int_alg(t_elements *s)
{
	if (s->stack_a[0] > s->stack_a[1])
	{
		if (s->stack_a[1] < s->stack_a[2])
		{
			if (s->stack_a[0] > s->stack_a[2])
				ft_rotate_a(s);
			else
				ft_swap_a(s);
		}
		else
		{
			ft_swap_a(s);
			ft_reverse_rotate_a(s);
		}
	}
	else
	{
		if (s->stack_a[0] > s->stack_a[2])
			ft_reverse_rotate_a(s);
		else
			three_alg_help(s);
	}
}

void	four_int_alg(t_elements *s)
{
	find_smallest(s);
	push_up(s);
	if (!check_order(s))
	{
		ft_push_b(s);
		three_int_alg(s);
		ft_push_a(s);
	}
}

void	five_int_alg(t_elements *s)
{
	find_smallest(s);
	push_up(s);
	if (!check_order(s))
	{
		ft_push_b(s);
		four_int_alg(s);
		ft_push_a(s);
	}
}
