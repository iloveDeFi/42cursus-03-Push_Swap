/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inst_Rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:04:37 by bbessard          #+#    #+#             */
/*   Updated: 2023/02/24 15:36:23 by bbessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* 
** Décale d’une position vers le haut tous les élements de la pile a.
** Le premier élément devient le dernier. 
*/

void	ft_rotate_a(t_elements *s)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = s->stack_a[i];
	while (i < s->size_a - 1)
	{
		s->stack_a[i] = s->stack_a[i + 1];
		i++;
	}
	s->stack_a[i] = tmp;
	if (s->counter == 0)
		ft_printf("ra\n");
}

/* 
** Décale d’une position vers le haut tous les élements de la pile b.
** Le premier élément devient le dernier. 
*/

void	ft_rotate_b(t_elements *s)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = s->stack_b[i];
	while (i < s->size_b - 1)
	{
		s->stack_b[i] = s->stack_b[i + 1];
		i++;
	}
	s->stack_b[i] = tmp;
	if (s->counter == 0)
		ft_printf("rb\n");
}

/*
**rr : ra et rb en même temps.
*/

void	ft_rotate_rr(t_elements *s)
{
	s->counter = 1;
	ft_rotate_a(s);
	ft_rotate_b(s);
	ft_printf("rr\n");
	s->counter = 0;
}
