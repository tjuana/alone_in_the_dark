/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 17:10:58 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/27 18:10:40 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

int ascending(int a, int b)
{
	return (a <= b);
}

void	ft_swap(int *a, int *b)
{
	int sw;

	sw = *a;
	*a = *b;
	*b = sw;
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*l;
	t_list 	*p1;

	l = lst;
	while (l)
	{
		p1 = l->next;
		while (p1)
		{
			if ((cmp)(l->data, p1->data))
				ft_swap(&l->data, &p1->data);
			p1 = p1->next;
		}
		l = l->next;
	}
	return (lst);
}
int		main(void)
{
	t_list *l;
	int		i;
	t_list	*t;
	t_list	*b;

	i = 50;
	l = malloc(sizeof(t_list));
	t = l;
	b = l;
	while (i)
	{
		l->data = i % 3;
		l->next = malloc(sizeof(t_list));
		l = l->next;
		--i;
	}
	l->data = (int)"fromage";
	l->next = NULL;
	while (t)
	{
		printf("%d ", t->data);
		t = t->next;
		++i;
	}
	printf("\n");
	b = sort_list(b, ascending);
	while (b)
	{
		printf("%d ", b->data);
		b = b->next;
		++i;
	}
}
