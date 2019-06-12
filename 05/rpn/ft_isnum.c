/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 14:07:09 by tjuana            #+#    #+#             */
/*   Updated: 2019/06/12 14:07:09 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "rpn_calc.h"

int	ft_isnum(char *str)
{
	int i = 0;

	if (str[i] == '-' || str[i] == '+')
		++i;
	if ('0' <= str[i] && str[i] <= '9')
		return (1);
	return (0);
}