/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:10:35 by bbessard          #+#    #+#             */
/*   Updated: 2023/02/28 13:10:13 by bbessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_normalize(t_elements *s)
{
	int	i;
	int	j;
	int	count;

	init_stack(s);
	i = -1;
	while (++i < s->size_a)
		s->tmp[i] = s->stack_a[i];
		i = 0;
	while (i < s->size_a)
	{
		j = -1;
		count = -1;
		while (++j < s->size_a)
		{
			if (s->tmp[i] < s->tmp[j])
				count++;
		}
		s->stack_a[i] = ((s->size_a - 1) - count);
		i++;
	}
	free (s->tmp);
}
