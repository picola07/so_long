/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilabyed <ilabyed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:46:59 by ilabyed           #+#    #+#             */
/*   Updated: 2022/10/31 19:12:01 by ilabyed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	size_t			i;
	unsigned char	*cast_b;

	i = 0;
	cast_b = (unsigned char *)dest;
	while (i < len)
	{
		cast_b[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}
