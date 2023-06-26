/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilabyed <ilabyed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 11:32:18 by ilabyed           #+#    #+#             */
/*   Updated: 2022/11/07 16:00:05 by ilabyed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s1;

	i = 0;
	j = start;
	if (j > ft_strlen(s))
		return (ft_calloc (1, (sizeof(char) * len)));
	s1 = malloc(sizeof(char) * (len + 1));
	if (!s1)
		return (NULL);
	while (len--)
	{
		s1[i] = s[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}
