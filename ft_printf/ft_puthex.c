/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilabyed <ilabyed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:47:01 by ilabyed           #+#    #+#             */
/*   Updated: 2022/11/29 01:02:19 by ilabyed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long nb, char *base)
{
	int	i;

	i = 0;
	if (nb < 16)
	{
		i += ft_putchar(base[nb]);
	}
	else
	{
		i += ft_puthex(nb / 16, base);
		i += ft_puthex(nb % 16, base);
	}
	return (i);
}
