/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnagy <lnagy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/05 18:05:35 by lnagy             #+#    #+#             */
/*   Updated: 2016/02/05 18:05:40 by lnagy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*read_file(char *nm_fl)
{
	int		fd;
	char	buf[151];
	char	*tab;
	int		rd;

	tab = "";
	fd = open(nm_fl, O_RDONLY);
	if (fd == -1)
	{
		write(1, "fillit source_file\n", 19);
	}
	else
	{
		rd = read(fd, buf, 150))
		buf[rd] = '\0';
		tab = ft_strjoin(tab, buf);
	}
	return (tab);
}

char	***put_tetris_intab(char *tab)
{
	int		i;
	int		j;
	char	**tmp;
	char	***t;

	j = 0;
	tmp = ft_strsplit(tab, ' ');
	while (tmp[j])
	{
		t[i][j] = tmp[j];
		j++;
	}
	return (t);
}

int		is_tetris(char ***t)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (t[i])
	{
		j = 0;
		while (t[i][j])
		{
			k = 0;
			while (t[i][j][k])
			{
				if (t[i][j][k] != '#' && t[i][j] != '.' && t[i][j] != ' ')
				{
					write(1, "tetriminos error\n", 18);
					return (0;)
				}
				if (t[i][j][k] == '#' && (t[i][j][k + 1] != '#' || t[i][j + 1][k] != '#')
				{
					write(1, "tetriminos error\n", 18);
					return (0);
				}
				k++;
			}
			j++;
		}
		i++;
	}
	return (1);
}