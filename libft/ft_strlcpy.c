/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilabyed <ilabyed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:10:39 by ilabyed           #+#    #+#             */
/*   Updated: 2022/10/13 19:48:22 by ilabyed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	char	*cast_s;

	i = 0;
	j = ft_strlen(src);
	cast_s = (char *)src;
	if (size != 0)
	{
		while (cast_s[i] && i < (size - 1))
		{
			dst[i] = cast_s[i];
			i++;
		}
	}
	else
		return (ft_strlen(src));
	dst[i] = '\0';
	return (j);
}
