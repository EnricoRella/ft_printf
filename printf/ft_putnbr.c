/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erella <erella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:39:32 by erella            #+#    #+#             */
/*   Updated: 2022/07/01 15:42:40 by erella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lengthnum(int nb, int base)
{
	int	c;

	c = 0;
	if (nb <= 0)
		++c;
	while (nb && ++c)
		nb = (nb / base);
	return (c);
}

int	ft_putnbr(int nb)
{
	int	len_num;

	len_num = ft_lengthnum(nb, 10);
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = 147483648;
		}
		else
				nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
		ft_putchar(nb + '0');
	return (len_num);
}
