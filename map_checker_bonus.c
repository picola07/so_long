/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilabyed <ilabyed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 04:53:51 by ilabyed           #+#    #+#             */
/*   Updated: 2023/05/14 17:18:12 by ilabyed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_error(char *str)
{
	ft_printf("error at %s", str);
	exit(1);
}

void	mapchck(char **str)
{
	int	i;
	int	j;
	int	len;
	int	lines;

	i = 0;
	lines = ft_lines(str) - 1;
	len = ft_strlen(*str);
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (j == (len - 1) && i < lines)
				if ((str[i][j] != '1') || (str[i + 1][0] != '1'))
					ft_error("border");
			if (i == 0 || i == lines)
				if (str[i][j] != '1')
					ft_error("border");
			j++;
		}
		i++;
	}
}

void	spichck(t_kolchi *gra, char **str)
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
			if (str[i][j] == 'P')
				gra->p++;
			if (str[i][j] == 'E')
				gra->e++;
			if (str[i][j] == 'C')
				gra->c++;
			j++;
		}
		i++;
	}
	if ((gra->p != 1) || (gra->e != 1) || (gra->c < 1))
		ft_error("spicies");
}

void	ft_items(char **str)
{
	int	i;
	int	j;
	int	count;
	int	len;

	len = ft_strlen(*str);
	i = 0;
	count = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] == ('P') || str[i][j] == ('E'))
				count++;
			else if (str[i][j] == ('C') || str[i][j] == ('1')
					|| str[i][j] == ('0'))
				count++;
			j++;
		}
		i++;
	}
	if (count != (ft_lines(str) * len))
		ft_error("stranger spicies");
}

int	ft_ccoin(t_kolchi *gra)
{
	int		i;
	int		j;
	int		c;
	char	**str;

	i = 0;
	c = 0;
	str = gra->map;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] == 'C')
				c++;
			j++;
		}
		i++;
	}
	return (c);
}
