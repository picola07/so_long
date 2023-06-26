/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilabyed <ilabyed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:05:00 by ilabyed           #+#    #+#             */
/*   Updated: 2022/10/31 16:16:19 by ilabyed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hs;

	i = 0;
	j = 0;
	if (!needle[0])
		return (&(hs = (char *)haystack)[i]);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (i + j >= len)
				return (0);
			if (needle[j] == haystack[i + j] && needle[j + 1] == '\0')
				return (&(hs = (char *)haystack)[i]);
			j++;
		}
		i++;
	}
	return (0);
}
