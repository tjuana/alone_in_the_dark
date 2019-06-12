/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pion.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:16:11 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/27 14:26:00 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mate.h"

int	pion(char **desk,int h, int w)
{
	if (h > 1)
		if ((desk[h - 1][w - 1] == 'K') || (desk[h - 1][w + 1] == 'K'))
			return (1);
	return (0);
}