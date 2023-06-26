/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilabyed <ilabyed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:21:49 by ilabyed           #+#    #+#             */
/*   Updated: 2023/05/14 17:32:13 by ilabyed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	ft_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_check(t_kolchi *gra, char *str)
{
	int	i;

	gra->nwline = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			gra->nwline = gra->nwline + 1;
		i++;
	}
}

int	main(int ar, char **av)
{
	t_kolchi	pi;
	char		str[1024];
	char		**cpy;
	int			fd;
	int			len;

	(void)ar;
	if (ar <= 1)
		exit(1);
	pi.moves = 0;
	fd = open(av[1], O_RDONLY);
	if (fd < 0)
		ft_error("file makaynch");
	len = read(fd, str, 1024);
	if (!ft_strnstr(av[1], ".ber", ft_strlen(av[1])))
		ft_error("where .ber");
	ft_check(&pi, str);
	str[len] = '\0';
	if (len == 0 || len == -1)
		ft_error("dossier");
	pi.map = ft_split(str, '\n');
	cpy = ft_split(str, '\n');
	mapodakchi(&pi, cpy);
	render(&pi);
}

void	mapodakchi(t_kolchi *gra, char **cpy)
{
	gra->lines = ft_lines(gra->map);
	gra->columns = ft_columns(gra->map);
	rectangle(gra->map);
	mapchck(gra->map);
	spichck(gra, gra->map);
	ft_items(gra->map);
	ft_path(cpy);
	ft_vpath(cpy);
	if (gra->lines != gra->nwline)
		ft_error("NW lines");
}
