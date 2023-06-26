/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouvements_utils_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilabyed <ilabyed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 22:04:17 by ilabyed           #+#    #+#             */
/*   Updated: 2023/05/14 17:53:43 by ilabyed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	printmov(t_kolchi *gra)
{
	char	*moves;

	gra->moves++;
	moves = ft_itoa(gra->moves);
	mlx_string_put(gra->mlx, gra->win,
		(gra->columns * 50) / 2, 0, 16777215, moves);
	free(moves);
}
