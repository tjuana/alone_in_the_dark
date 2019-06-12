/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove2_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 16:29:06 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/27 12:37:30 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*root;
	t_list	*node;
	t_list	*next;

	root = *begin_list;
	node = *begin_list;
	while (root)
	{
		next = root->next;
		if ((cmp)(root->data, data_ref) == 0)
		{
			if (root == *begin_list)
				*begin_list = (*begin_list)->next;
			node->next = next;
			free(root);
		}
		node = root;
		root = next;
	}
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

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

int    ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	print_list(t_list *list)
{
	while (list)
	{
		printf("%s\n", list->data);
		list = list->next;
	}
}

int		main(void)
{
	t_list *a;

	a = NULL;

	a = mf_add(a, "arr");
	a = mf_add(a, "arr2");
	a = mf_add(a, "userdel");
	a = mf_add(a, "arr4");
	a = mf_add(a, "arr5");
	a = mf_add(a, "arr6");
	a = mf_add(a, "userdel");
	a = mf_add(a, "arr6");
	a = mf_add(a, "arr6");
	a = mf_add(a, "arr6");
	char *str = "userdel";
	printf("%d\n", ft_list_size(a));
	print_list(a);
	printf("\n");
	ft_list_remove_if(&a, str, ft_strcmp);
	printf("хорош мужик\n");
	printf("%d\n", ft_list_size(a));
	print_list(a);
	return (0);
}
