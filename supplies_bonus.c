/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   supplies_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilabyed <ilabyed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:21:35 by ilabyed           #+#    #+#             */
/*   Updated: 2023/05/14 17:37:27 by ilabyed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	ft_columns(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
			j++;
		i++;
	}
	return (j);
}

int	ft_lines(char **str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
			j++;
		i++;
	}
	return (i);
}

void	ft_won(t_kolchi *gra)
{
	gra->moves++;
	ft_printf("YOU WON");
	exit(1);
}

void	lmosa3id(char **cpy)
{
	int	i;
	int	j;

	i = 0;
	while (cpy[i])
	{
		j = 0;
		while (cpy[i][j])
		{
			if (cpy[i][j] == 'P')
			{
				if (cpy[i + 1][j] == '0' || cpy[i + 1][j] == 'C')
					cpy[i + 1][j] = 'P';
				if (cpy[i - 1][j] == '0' || cpy[i - 1][j] == 'C')
					cpy[i - 1][j] = 'P';
				if (cpy[i][j + 1] == '0' || cpy[i][j + 1] == 'C')
					cpy[i][j + 1] = 'P';
				if (cpy[i][j - 1] == '0' || cpy[i][j - 1] == 'C')
					cpy[i][j - 1] = 'P';
			}
			j++;
		}
		i++;
	}
}
