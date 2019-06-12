/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:43:12 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/22 16:07:56 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*mf_add(t_list *list, char *data)
{
	t_list *tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->data = data;
		tmp->next = list;
	}
	return (tmp);
}

int		ft_list_size(t_list *begin_list)
{
	int i;
	t_list *r;

	i = 0;
	r = begin_list;
	while (r)
	{
		r = r->next;
		i++;
	}
	return (i);
}

int		main(void)
{
	t_list *a;

	a = NULL;

	a = mf_add(a, "arr");
	a = mf_add(a, "arr2");
	a = mf_add(a, "arr3");
	//a = mf_add(a, "arr4");
	//a = mf_add(a, "arr5");
	//a = mf_add(a, "arr6");
	printf("%d", ft_list_size(a));
	return (0);
}
