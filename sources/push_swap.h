/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:06:51 by bbessard          #+#    #+#             */
/*   Updated: 2023/03/06 13:45:42 by bbessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "ft_printf.h"
# include "libft.h"
# include <stdlib.h>
# define LONG_V 9223372036854775808

/*
** Types
*/

typedef struct s_struct
{
	char	**arguments;
	int		*stack_a;
	int		*stack_b;
	int		*tmp;
	int		size_a;
	int		size_b;
	int		min;
	int		i;
	int		j;
	int		counter;
	int		small_i;
	int		big_i;
}			t_elements;

/* main.c*/
void	mult_args_elements(t_elements *ps, int argc, char **argv);
void	two_args_elements(t_elements *ps, char **argv);

/* error.c */
int		error(void);

/* instructions.c */
void	ft_swap_a(t_elements	*s);
void	ft_swap_b(t_elements	*s);
void	ft_swap_ss(t_elements	*s);
void	ft_push_a(t_elements	*s);
void	ft_push_b(t_elements	*s);
void	ft_rotate_a(t_elements	*s);
void	ft_rotate_b(t_elements	*s);
void	ft_rotate_rr(t_elements	*s);
void	ft_reverse_rotate_a(t_elements	*s);
void	ft_reverse_rotate_b(t_elements	*s);
void	ft_reverse_rotate_rr(t_elements	*s);

/* algorithms1/2.c */
void	ft_algorithms(t_elements	*s);
void	big_algorithm(t_elements	*s);
void	two_args_alg(t_elements	*s);
void	three_int_alg(t_elements	*s);
void	four_int_alg(t_elements	*s);
void	five_int_alg(t_elements	*s);

/* alg_utils.c */
void	three_alg_help(t_elements *s);
void	push_up(t_elements *s);
void	find_smallest(t_elements	*s);

/* checks.c */
int		check_order(t_elements	*s);
void	check_max_min(char *str);
void	check_non_num(char *str);
void	check_doubles(int	*tab, int len);

/* free.c */
void	free_stacks(t_elements *s);

/* stacks.c */
void	create_stacks(t_elements *ps);
void	init_stack(t_elements *s);

/* normalize */
void	ft_normalize(t_elements *s);

#endif
