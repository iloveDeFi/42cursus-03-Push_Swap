/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:50:49 by bbessard          #+#    #+#             */
/*   Updated: 2023/08/02 10:27:06 by bbessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_elements *s)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = s->size_a;
	while (((!check_order(s))))
	{
		j = 0;
		while (j < size && (!check_order(s)))
		{
			j++;
			if (((s->stack_a[0] >> i) & 1) == 0)
				ft_push_b(s);
			else
				ft_rotate_a(s);
		}
		while (s->size_b > 0)
			ft_push_a(s);
		i++;
	}
}
