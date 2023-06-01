/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_and_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:04:09 by bbessard          #+#    #+#             */
/*   Updated: 2023/06/01 13:30:18 by bbessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** sa (swap a) : Intervertit les 2 premiers éléments au sommet de la pile a. 
** Ne fait rien s’il n’y en a qu’un ou aucun.
*/

void	ft_swap_a(t_elements *s)
{
	int	tmp;

	if (s->size_a > 1)
	{
		tmp = s->stack_a[0];
		s->stack_a[0] = s->stack_a[1];
		s->stack_a[1] = tmp;
		if (s->counter == 0)
			ft_printf("sa\n");
	}
}

/*
** sb (swap b ) : Intervertit les 2 premiers éléments au sommet de la pile b. 
** Ne fait rien s’il n’y en a qu’un ou aucun.
*/

void	ft_swap_b(t_elements *s)
{
	int	tmp;

	if (s->size_b > 1)
	{
		tmp = s->stack_b[0];
		s->stack_b[0] = s->stack_b[1];
		s->stack_b[1] = tmp;
		if (s->counter == 0)
			ft_printf("sb\n");
	}
}

/*
** ss : sa et sb en même temps.
*/

void	ft_swap_ss(t_elements *s)
{
	s->counter = 1;
	ft_swap_a(s);
	ft_swap_b(s);
	ft_printf("ss\n");
	s->counter = 0;
}

/*
** pa (push a) : Prend le premier élément au sommet de b et le met sur a.
** Ne fait rien si b est vide.
*/

void	ft_push_a(t_elements *s)
{
	int	i_b;
	int	i_a;

	i_b = 0;
	if (s->size_b > 0)
	{
		s->size_a += 1;
		i_a = s->size_a;
		while (--i_a > 0)
			s->stack_a[i_a] = s->stack_a[i_a - 1];
		s->stack_a[i_a] = s->stack_b[i_a];
		s->size_b -= 1;
		i_b = s->size_b;
		while (i_a < i_b)
		{
			s->stack_b[i_a] = s->stack_b[i_a + 1];
			i_a++;
		}
		s->stack_b[i_a] = 0;
		ft_printf("pa\n");
	}
}

/*
** pb (push b) : Prend le premier élément au sommet de a et le met sur b.
** Ne fait rien si a est vide.
*/
void	ft_push_b(t_elements *s)
{
	int	i_a;
	int	i_b;

	i_a = 0;
	if (s->size_a > 0)
	{
		s->size_b += 1;
		i_b = s->size_b;
		while (--i_b > 0)
			s->stack_b[i_b] = s->stack_b[i_b - 1];
		s->stack_b[i_b] = s->stack_a[i_b];
		s->size_a -= 1;
		i_a = s->size_a;
		while (i_b < i_a)
		{
			s->stack_a[i_b] = s->stack_a[i_b + 1];
			i_b++;
		}
		s->stack_a[i_b] = 0;
		ft_printf("pb\n");
	}
}
