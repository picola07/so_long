/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilabyed <ilabyed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:05:05 by ilabyed           #+#    #+#             */
/*   Updated: 2022/10/31 18:08:22 by ilabyed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = ft_strlen(s) + 1;
	str = (char *)s;
	if (c == '\0')
		return (&str[i - 1]);
	while (--i >= 0)
	{
		if (str[i] == (char)c)
			return (&str[i]);
	}
	return (0);
}
