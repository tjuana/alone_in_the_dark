/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   figure.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:35:15 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/27 15:07:21 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mate.h"

int	figure(char f)
{
	if (f == 'P' || f == 'B' || f == 'R' || f == 'Q')
		return (1);
	return (0);
}
