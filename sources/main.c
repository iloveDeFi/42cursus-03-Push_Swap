/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:55:22 by bbessard          #+#    #+#             */
/*   Updated: 2023/03/01 11:44:12 by bbessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
push_swap calculates and displays on the standard
output the smallest progam using Push_swap instruction language 
that sorts integer arguments received
*/

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_elements	ps;

	ps.size_a = 0;
	ps.size_b = 0;
	ps.i = 0;
	(void) argv;
	if (argc > 1)
	{
		if (argc == 2)
			two_args_elements(&ps, argv);
		if (argc > 2)
			mult_args_elements(&ps, argc, argv);
		check_doubles(ps.stack_a, ps.size_a);
		if (check_order(&ps))
			free_stacks(&ps);
		else
		{
			ft_normalize(&ps);
			ft_algorithms(&ps);
		}
		free_stacks(&ps);
	}
}

void	two_args_elements(t_elements *ps, char **argv)
{
	ps->arguments = ft_split(argv[1], ' ');
	if (!ps->arguments)
		error();
	while (ps->arguments[ps->size_a])
	{
		ps->counter = 0;
		check_non_num(ps->arguments[ps->size_a]);
		ps->size_a++;
	}
	create_stacks(ps);
	while (ps->arguments[ps->i])
	{
		check_max_min(ps->arguments[ps->i]);
		ps->stack_a[ps->i] = ft_atoi(ps->arguments[ps->i]);
		free(ps->arguments[ps->i]);
		ps->i++;
	}
	free(ps->arguments);
}

void	mult_args_elements(t_elements *ps, int argc, char **argv)
{
	ps->size_a = argc - 1;
	create_stacks(ps);
	while (ps->i < ps->size_a)
	{
		check_non_num(argv[ps->i + 1]);
		check_max_min(argv[ps->i + 1]);
		ps->stack_a[ps->i] = ft_atoi(argv[ps->i + 1]);
		ps->i++;
	}
}
