/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkmate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:00:09 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/27 15:20:38 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mate.h"

static int	checkmate(char **d)
{
	int i = 1;
	int j = 0;

	while (d[i])
	{
		j = 0;
		while (d[i][j])
		{
			if (d[i][j] == 'P' && pion(d, i, j))
				return (1);
			if (d[i][j] == 'B' && fou(d, i, j))
				return (1);
			if (d[i][j] == 'R' && tour(d, i, j))
				return (1);
			if (d[i][j] == 'Q' && (tour(d, i, j) || fou(d, i, j)))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int			main(int c, char **v)
{
	if (c > 1 && (c - 1) == (int)ft_strlen(v[1]))
	{
		int	i = 1;
		while (v[i])
		{
			if ((int)ft_strlen(v[i]) == c - 1)
				i++;
			else
			{
				write(1, "Fail\n", 5);
				return (0);
			}
		}
		if (checkmate(v) == 1)
			write(1, "Success", 7);
		else
			write(1, "Fail", 4);
	}
	else if (c > 1)
		write(1, "Fail", 4);
	write(1, "\n", 1);
	return (0);
}
