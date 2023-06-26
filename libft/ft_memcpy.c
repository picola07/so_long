/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilabyed <ilabyed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:16:17 by ilabyed           #+#    #+#             */
/*   Updated: 2022/10/30 18:55:44 by ilabyed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*cast_d;
	char	*cast_s;

	i = 0;
	if (!src && !dst)
		return (NULL);
	cast_d = (char *)dst;
	cast_s = (char *)src;
	while (i < n)
	{
		cast_d[i] = cast_s[i];
		i++;
	}
	return (dst);
}
