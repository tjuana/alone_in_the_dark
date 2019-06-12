/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tour.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 14:11:24 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/27 15:08:20 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mate.h"

int	tour(char **desk, int h, int w)
{
	int	hi = h;
	int we = w;
	int len = (int)ft_strlen(desk[1]);

	while (--hi > 0 && figure(desk[hi][w]) != 1)
		if (desk[hi][w] == 'K')
			return (1);
	hi = h;
	while (--we >= 0 && figure(desk[h][we]) != 1)
		if (desk[h][we] == 'K')
			return (1);
	we = w;
	while (++hi <= len && figure(desk[hi][w]) != 1)
		if (desk[hi][w] == 'K')
			return (1);
	hi = h;
	while (++we < len && figure(desk[h][we]) != 1)
		if (desk[h][we] == 'K')
			return (1);
	return (0);
}
