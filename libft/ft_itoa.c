/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilabyed <ilabyed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:17:46 by ilabyed           #+#    #+#             */
/*   Updated: 2022/10/31 15:04:17 by ilabyed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static int	count(long int n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		n = n * -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nb)
{
	long int	n;
	int			m;
	int			len;
	char		*p;

	n = nb;
	len = count(n);
	p = malloc(sizeof(char) * len + 1);
	if (!p)
		return (0);
	if (n < 0)
	{
		p[0] = '-';
		n *= -1;
	}
	p[len--] = '\0';
	if (n == 0)
		p[0] = 0 + 48;
	while (n > 0)
	{
		m = n % 10 + '0';
		n = n / 10;
		p[len--] = m;
	}
	return (p);
}
