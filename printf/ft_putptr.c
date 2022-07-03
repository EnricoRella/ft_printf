/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erella <erella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:48:29 by erella            #+#    #+#             */
/*   Updated: 2022/06/30 18:35:30 by erella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>

void	ft_ptrconvert(uintptr_t ptr, char *digit)
{
	if (ptr > 0)
	{
		ft_ptrconvert(ptr / 16, digit);
		ft_putchar(digit[ptr % 16]);
	}
}

int	ft_putptr(unsigned long long ptr)
{
	int		len_print;
	char	*digit;

	digit = "0123456789abcdef";
	len_print = 0;
	len_print += (ft_putstr("0x") + ft_ptr_len(ptr));
	if (ptr == 0)
		len_print += ft_putchar('0');
	else
		ft_ptrconvert(ptr, digit);
	return (len_print);
}

int	ft_ptr_len(uintptr_t num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}
