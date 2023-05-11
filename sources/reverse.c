/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:04:41 by bbessard          #+#    #+#             */
/*   Updated: 2023/02/21 11:04:42 by bbessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Décale d’une position vers le bas tous les élements de la pile a.
** Le dernier élément devient le premier.
*/
void	ft_reverse_rotate_a(t_elements *s)
{
	int	tmp;
	int	i;

	i = s->size_a - 1;
	tmp = s->stack_a[i];
	while (i > 0)
	{
		s->stack_a[i] = s->stack_a[i - 1];
		i--;
	}
	s->stack_a[i] = tmp;
	if (s->counter == 0)
		ft_printf("rra\n");
}

/* 
** Décale d’une position vers le bas tous les élements de la pile b.
** Le dernier élément devient le premier. 
*/

void	ft_reverse_rotate_b(t_elements *s)
{
	int	tmp;
	int	i;

	i = s->size_b - 1;
	tmp = s->stack_b[i];
	while (i > 0)
	{
		s->stack_b[i] = s->stack_b[i - 1];
		i--;
	}
	s->stack_b[i] = tmp;
	if (s->counter == 0)
		ft_printf("rra\n");
}

/*rrr : rra et rrb en même temps*/

void	ft_reverse_rotate_rrr(t_elements *s)
{
	s->counter = 1;
	ft_reverse_rotate_a(s);
	ft_reverse_rotate_b(s);
	ft_printf("rrr\n");
	s->counter = 0;
}
