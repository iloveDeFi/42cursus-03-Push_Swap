/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:14:02 by lfabbian          #+#    #+#             */
/*   Updated: 2023/02/27 13:26:14 by bbessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_x(unsigned int nb, int type)
{
	char	*alpha;

	if (type == 'x')
		alpha = "0123456789abcdef";
	else
		alpha = "0123456789ABCDEF";
	return (ft_base16(nb, alpha));
}

int	ft_base16(unsigned long nb, char *alpha)
{
	int	count;

	count = 0;
	if (nb > 15)
	{
		count += ft_base16(nb / 16, alpha);
		count += ft_base16(nb % 16, alpha);
	}
	else
		count += ft_put_c(alpha[nb]);
	if (count < 0)
		return (-1);
	return (count);
}
