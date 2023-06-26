/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilabyed <ilabyed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:42:58 by ilabyed           #+#    #+#             */
/*   Updated: 2022/11/29 00:08:07 by ilabyed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *stri)
{
	int	i;

	i = 0;
	if (stri == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (stri[i])
	{
		ft_putchar(stri[i]);
		i++;
	}
	return (i);
}
