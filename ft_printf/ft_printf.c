/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilabyed <ilabyed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 22:17:03 by ilabyed           #+#    #+#             */
/*   Updated: 2022/11/29 01:18:26 by ilabyed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conver(const char *p, va_list args, int i)
{
	int	res;

	res = 0;
	if (p[i] == 'c')
		res += ft_putchar(va_arg(args, int));
	else if (p[i] == 's')
		res += ft_putstr(va_arg(args, char *));
	else if (p[i] == 'i' || p[i] == 'd')
		res += ft_putnbr(va_arg(args, int));
	else if (p[i] == 'u')
		res += ft_putuns(va_arg(args, unsigned int));
	else if (p[i] == 'x')
		res += ft_puthex(va_arg(args, unsigned int), "0123456789abcdef");
	else if (p[i] == 'X')
		res += ft_puthex(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (p[i] == 'p')
	{
		res += ft_putstr("0x");
		res += ft_puthex(va_arg(args, long), "0123456789abcdef");
	}
	else
		res += ft_putchar('%');
	return (res);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		res;
	int		i;

	va_start(args, format);
	res = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			res += ft_conver(format, args, i);
			i++;
		}
		else
			res += ft_putchar(format[i++]);
	}
	va_end(args);
	return (res);
}
