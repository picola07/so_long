/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilabyed <ilabyed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:46:13 by ilabyed           #+#    #+#             */
/*   Updated: 2022/10/31 18:17:08 by ilabyed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*cast_d;
	char	*cast_s;

	i = 0;
	cast_d = (char *)dst;
	cast_s = (char *)src;
	if (!dst && !src)
		return (NULL);
	if (cast_s < cast_d)
	{
		while (len > 0)
		{
			cast_d[len - 1] = cast_s[len - 1];
			len--;
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
