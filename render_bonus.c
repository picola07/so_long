/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilabyed <ilabyed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 22:03:29 by ilabyed           #+#    #+#             */
/*   Updated: 2023/05/12 22:17:45 by ilabyed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	ft_exit(void)
{
	exit(1);
}

void	render(t_kolchi *gra)
{
	gra->mlx = mlx_init();
	gra->win = mlx_new_window(gra->mlx, gra->columns * 50, gra->lines * 50,
			"l9rd o l7fra");
	gra->wall = mlx_xpm_file_to_image(gra->mlx, "./img/1.xpm",
			&gra->img_width, &gra->img_height);
	gra->road = mlx_xpm_file_to_image(gra->mlx, "./img/0.xpm",
			&gra->img_width, &gra->img_height);
	gra->player = mlx_xpm_file_to_image(gra->mlx, "./img/P.xpm",
			&gra->img_width, &gra->img_height);
	gra->coin = mlx_xpm_file_to_image(gra->mlx, "./img/C.xpm",
			&gra->img_width, &gra->img_height);
	gra->exit = mlx_xpm_file_to_image(gra->mlx, "./img/E.xpm",
			&gra->img_width, &gra->img_height);
	ft_printmap(gra);
	mlx_hook(gra->win, 2, 0, ft_mouvement, gra);
	mlx_hook(gra->win, 17, 0, ft_exit, gra);
	mlx_loop(gra->mlx);
}

int	ft_mouvement(int keycode, t_kolchi *gra)
{
	if (keycode == 53)
		exit(0);
	else if (keycode == 0)
		ft_moveleft(gra);
	else if (keycode == 1)
		ft_movedown(gra);
	else if (keycode == 2)
		ft_moveright(gra);
	else if (keycode == 13)
		ft_moveup(gra);
	return (0);
}

void	ft_printmap(t_kolchi *gra)
{
	int		i;
	int		j;
	char	map;

	i = 0;
	while (i < gra->lines)
	{
		j = 0;
		while (j < gra->columns)
		{
			map = gra->map[i][j];
			mlx_put_image_to_window(gra->mlx,
				gra->win, gra->road, j * 50, i * 50);
			impriment(gra, j, i, map);
			j++;
		}
		i++;
	}
}

void	impriment(t_kolchi *gra, int x, int y, char map)
{
	if (map == 'P')
		mlx_put_image_to_window(gra->mlx,
			gra->win, gra->player, x * 50, y * 50);
	if (map == 'E')
		mlx_put_image_to_window(gra->mlx, gra->win, gra->exit, x * 50, y * 50);
	if (map == 'C')
		mlx_put_image_to_window(gra->mlx, gra->win, gra->coin, x * 50, y * 50);
	if (map == '1')
		mlx_put_image_to_window(gra->mlx, gra->win, gra->wall, x * 50, y * 50);
}
