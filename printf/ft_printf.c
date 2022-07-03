/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erella <erella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:38:05 by erella            #+#    #+#             */
/*   Updated: 2022/07/01 15:56:09 by erella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checktype(va_list args, const char type)
{
	int	check;

	check = 0;
	if (type == 'c')
		check += ft_putchar(va_arg(args, int));
	else if (type == 's')
		check += ft_putstr(va_arg(args, char *));
	else if (type == 'p')
		check += ft_putptr(va_arg(args, unsigned long long));
	else if (type == 'd' || type == 'i')
		check += ft_putnbr(va_arg(args, int));
	else if (type == 'u')
		check += ft_putunbr(va_arg(args, int));
	else if (type == 'x' || type == 'X')
		check += ft_puthex(va_arg(args, unsigned int), type);
	else if (type == '%')
		check += ft_putchar('%');
	return (check);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		type;
	va_list	args;

	i = 0;
	type = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			type += ft_checktype(args, str[i + 1]);
			i++;
		}
		else
			type += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (type);
}
