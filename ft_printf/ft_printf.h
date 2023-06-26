/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilabyed <ilabyed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:02:24 by ilabyed           #+#    #+#             */
/*   Updated: 2022/11/28 23:23:30 by ilabyed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(const char *str, ...);
int	ft_putnbr(int nb);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_puthex(unsigned long nb, char *base);
int	ft_putuns(unsigned long nb);

#endif
