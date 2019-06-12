/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 14:07:18 by tjuana            #+#    #+#             */
/*   Updated: 2019/06/12 14:07:20 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rpn_calc.h"

void	ft_lstadd(t_list **begin_list, int val)
{
	t_list	*new;

	if ((new = (t_list *)malloc(sizeof(t_list))))
	{
		new->val = val;
		new->next = *begin_list;
		*begin_list = new;
	}
}
