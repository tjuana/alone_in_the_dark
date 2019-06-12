/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 17:31:39 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/27 17:35:17 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*lst;

	lst = begin_list;
	while (lst)
	{
		(*f)(lst->data);
		lst = lst->next;
	}
}
