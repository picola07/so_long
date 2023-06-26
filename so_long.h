/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilabyed <ilabyed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:15:37 by ilabyed           #+#    #+#             */
/*   Updated: 2023/05/14 17:16:31 by ilabyed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

// #include "gnl/get_next_line.h"
# include "ft_printf/ft_printf.h"
# include "libft/libft.h"
# include <fcntl.h>
# include <mlx.h>

typedef struct s_kolchi
{
	char	**map;
	void	*mlx;
	void	*win;
	void	*wall;
	void	*coin;
	void	*player;
	void	*road;
	void	*exit;
	int		player_y;
	int		player_x;
	int		lines;
	int		ccoin;
	int		moves;
	int		columns;
	int		img_width;
	int		img_height;
	int		nwline;
	int		e;
	int		c;
	int		p;
	int		z;
}			t_kolchi;

// typedef struct map_D
// {
//     int x;
//     int y;
// };
int			linecount(char *str);
int			rowcount(char *str);
void		mapchck(char **str);
void		mapchck2(char *str);
void		ft_error(char *str);
void		spichck(t_kolchi *gra, char **str);
void		ft_items(char **str);
void		rectangle(char **str);
char		**ft_path(char **str);
int			ft_lines(char **str);
void		ft_vpath(char **cpy);
int			ft_columns(char **str);
void		render(t_kolchi *gra);
int			ft_exit(void);
void		ft_printmap(t_kolchi *gra);
void		impriment(t_kolchi *gra, int i, int j, char map);
void		get_xy(t_kolchi *gra);
int			ft_mouvement(int keycode, t_kolchi *gra);
void		ft_moveup(t_kolchi *gra);
void		ft_moveright(t_kolchi *gra);
void		ft_movedown(t_kolchi *gra);
void		ft_moveleft(t_kolchi *gra);
void		ft_won(t_kolchi *gra);
int			ft_ccoin(t_kolchi *gra);
void		mapodakchi(t_kolchi *gra, char **cpy);
void		ft_pcorners(char **cpy);
void		ft_verify(char **str, int z);
void		lmosa3id(char **str);
#endif
