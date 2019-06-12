/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 14:07:24 by tjuana            #+#    #+#             */
/*   Updated: 2019/06/12 14:07:25 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "rpn_calc.h"

void	ft_lstdel(t_list **begin_list)
{
	t_list	*tmp;

	tmp = *begin_list;
	*begin_list = tmp->next;
	free(tmp);
}
