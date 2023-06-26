/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouvements.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilabyed <ilabyed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 00:30:55 by ilabyed           #+#    #+#             */
/*   Updated: 2023/05/14 01:32:42 by ilabyed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	get_xy(t_kolchi *gra)
{
	int		i;
	int		j;
	char	**str;

	str = gra->map;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] == 'P')
			{
				gra->player_x = j;
				gra->player_y = i;
				return ;
			}
			j++;
		}
		i++;
	}
}

void	ft_moveup(t_kolchi *gra)
{
	int	c;

	c = ft_ccoin(gra);
	get_xy(gra);
	if (gra->map[gra->player_y - 1][gra->player_x] == 'E' && c == 0)
		ft_won(gra);
	if (gra->map[gra->player_y - 1][gra->player_x] != '1'
		&& gra->map[gra->player_y - 1][gra->player_x] != 'E')
	{
		gra->map[gra->player_y - 1][gra->player_x] = 'P';
		gra->map[gra->player_y][gra->player_x] = '0';
		gra->player_y--;
		ft_printmap(gra);
		gra->moves++;
		ft_printf(" moves : %d\n", gra->moves);
	}
}

void	ft_moveright(t_kolchi *gra)
{
	int	c;

	c = ft_ccoin(gra);
	get_xy(gra);
	if (gra->map[gra->player_y][gra->player_x + 1] == 'E' && c == 0)
		ft_won(gra);
	if (gra->map[gra->player_y][gra->player_x + 1] != '1' &&
		gra->map[gra->player_y][gra->player_x + 1] != 'E')
	{
		gra->map[gra->player_y][gra->player_x + 1] = 'P';
		gra->map[gra->player_y][gra->player_x] = '0';
		gra->player_y--;
		ft_printmap(gra);
		gra->moves++;
		ft_printf(" moves : %d\n", gra->moves);
	}
}

void	ft_moveleft(t_kolchi *gra)
{
	int	c;

	c = ft_ccoin(gra);
	get_xy(gra);
	if (gra->map[gra->player_y][gra->player_x - 1] == 'E' && c == 0)
		ft_won(gra);
	if (gra->map[gra->player_y][gra->player_x - 1] != '1' &&
		gra->map[gra->player_y][gra->player_x - 1] != 'E')
	{
		gra->map[gra->player_y][gra->player_x - 1] = 'P';
		gra->map[gra->player_y][gra->player_x] = '0';
		gra->player_y--;
		ft_printmap(gra);
		gra->moves++;
		ft_printf(" moves : %d\n", gra->moves);
	}
}

void	ft_movedown(t_kolchi *gra)
{
	int	c;

	c = ft_ccoin(gra);
	get_xy(gra);
	if (gra->map[gra->player_y + 1][gra->player_x] == 'E' && c == 0)
		ft_won(gra);
	if (gra->map[gra->player_y + 1][gra->player_x] != '1' &&
		gra->map[gra->player_y + 1][gra->player_x] != 'E')
	{
		gra->map[gra->player_y + 1][gra->player_x] = 'P';
		gra->map[gra->player_y][gra->player_x] = '0';
		gra->player_y--;
		ft_printmap(gra);
		gra->moves++;
		ft_printf(" moves : %d\n", gra->moves);
	}
}
