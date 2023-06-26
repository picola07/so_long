/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilabyed <ilabyed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 22:43:41 by ilabyed           #+#    #+#             */
/*   Updated: 2022/11/01 02:56:51 by ilabyed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int		i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	function_s(unsigned int i, char *s)
{
	i = 0;
	*s -= 32;
	s++;
}

int main()
{
	char s[] = "issam";
	ft_striteri(s, function_s);
	printf("%s", s);
}*/