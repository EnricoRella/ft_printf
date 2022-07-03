/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erella <erella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 15:47:54 by erella            #+#    #+#             */
/*   Updated: 2022/07/01 15:51:34 by erella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lengthunum(int unsigned nb, int base)
{
	int	c;

	c = 0;
	if (nb <= 0)
		++c;
	while (nb && ++c)
		nb = (nb / base);
	return (c);
}

int	ft_putunbr(int unsigned nb)
{
	int	len_num;

	len_num = ft_lengthunum(nb, 10);
	if (nb < 0)
	{
		nb = (nb * -1);
		if (nb == 2147483648)
		{
			ft_putchar('2');
			nb = 147483648;
		}
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
