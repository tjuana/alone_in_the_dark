/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fou.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:21:27 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/27 15:09:00 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mate.h"

int	fou(char **desk, int h, int w)
{
	int hi = h;
	int we = w;
	int	len = (int)ft_strlen(desk[1]);

	while (++hi <= len && ++we < len && figure(desk[hi][we]) != 1)
		if (desk[hi][we] == 'K')
			return (1);
	hi = h;
	we = w;
	while (--hi > 0 && ++we < len && figure(desk[hi][we]) != 1)
		if (desk[hi][we] == 'K')
			return (1);
	hi = h;
	we = w;
	while (--hi > 0 && --we >= 0 && figure(desk[hi][we]) != 1)
		if (desk[hi][we] == 'K')
			return (1);
	hi = h;
	we = w;
	while (++hi < len && --we >= 0 && figure(desk[hi][we]) != 1)
		if (desk[hi][we] == 'K')
			return (1);
	return (0);
}
