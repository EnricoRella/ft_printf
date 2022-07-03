/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erella <erella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 15:56:28 by erella            #+#    #+#             */
/*   Updated: 2022/07/01 19:54:29 by erella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned int nb, const char c)
{
	char	*digit_low;
	char	*digit_up;
	int		len_hex;

	digit_low = "0123456789abcdef";
	digit_up = "0123456789ABCDEF";
	len_hex = 0;
	if (nb > 0)
	{
		if (c == 'x')
		{
			len_hex += ft_printhex(nb / 16, c);
			len_hex += write(1, &digit_low[nb % 16], 1);
		}
		else if (c == 'X')
		{
			len_hex += len_hex + ft_printhex(nb / 16, c);
			len_hex += write(1, &digit_up[nb % 16], 1);
		}
	}
	return (len_hex);
}

int	ft_puthex(unsigned int nb, const char c)
{
	if (nb == 0)
		return (write(1, "0", 1));
	else
		return (ft_printhex(nb, c));
}
