/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erella <erella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:37:08 by erella            #+#    #+#             */
/*   Updated: 2022/07/01 18:48:54 by erella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_putchar(int c);
int		ft_checktype(va_list args, const char c);
int		ft_putstr(char *str);
int		ft_printf(const char *str, ...);
void	ft_convert(int nb, const char *digit);
int		ft_putnbr(int nb);
int		ft_putunbr(unsigned int nb);
int		ft_puthex(unsigned int nb, const char c);
void	ft_ptrconvert(uintptr_t ptr, char *digit);
int		ft_ptr_len(uintptr_t ptr);
int		ft_putptr(unsigned long long ptr);

#endif