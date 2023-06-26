/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilabyed <ilabyed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 00:15:43 by ilabyed           #+#    #+#             */
/*   Updated: 2023/05/14 01:50:08 by ilabyed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	rectangle(char **str)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = ft_strlen(*str);
	while (str[i])
	{
		j = 0;
		while (str[i][j])
			j++;
		if (j != len)
			ft_error("rectangle");
		i++;
	}
}

char	**ft_path(char **cpy)
{
	lmosa3id(cpy);
	ft_pcorners(cpy);
	return (cpy);
}

void	ft_vpath(char **str)
{
	int	i;
	int	j;
	int	z;

	j = 0;
	i = 0;
	z = 0;
	str = ft_path(str);
	ft_verify(str, z);
}

void	ft_pcorners(char **cpy)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (cpy[i])
	{
		j = 0;
		while (cpy[i][j])
		{
			if (cpy[i][j] == 'P' && (cpy[i - 1][j] == '0' || cpy[i
					- 1][j] == 'C'))
				ft_path(cpy);
			if (cpy[i][j] == 'P' && (cpy[i][j - 1] == '0' || cpy[i][j
					- 1] == 'C'))
				ft_path(cpy);
			j++;
		}
		i++;
	}
}

void	ft_verify(char **str, int z)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] == 'C')
				ft_error("path (Collecties)");
			if (str[i][j] == 'E')
			{
				if (str[i + 1][j] == 'P' || str[i - 1][j] == 'P')
					z++;
				if (str[i][j + 1] == 'P' || str[i][j - 1] == 'P')
					z++;
			}
			j++;
		}
		i++;
	}
	if (z == 0)
		ft_error("invalid path");
}
