/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:50:46 by bbessard          #+#    #+#             */
/*   Updated: 2023/05/11 10:27:43 by bbessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	choose_sort(t_elements *s)
{
	if (s->size_a == 2)
		sort_2(s);
	else if (s->size_a == 3)
		sort_3(s);
	else if (s->size_a == 4)
		sort_4(s);
	else if (s->size_a == 5)
		sort_5(s);
	else if (s->size_a >= 6)
		sort(s);
}

void	sort_2(t_elements *s)
{
	if (s->stack_a[0] > s->stack_a[1])
		ft_swap_a(s);
}	

void	sort_3(t_elements *s)
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

void	sort_4(t_elements *s)
{
	find_smallest(s);
	push_up(s);
	if (!check_order(s))
	{
		ft_push_b(s);
		sort_3(s);
		ft_push_a(s);
	}
}

void	sort_5(t_elements *s)
{
	find_smallest(s);
	push_up(s);
	if (!check_order(s))
	{
		ft_push_b(s);
		sort_4(s);
		ft_push_a(s);
	}
}
