/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 14:07:29 by tjuana            #+#    #+#             */
/*   Updated: 2019/06/12 14:07:31 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rpn_calc.h"

int	ft_operate(t_list **begin_list, char c)
{
	t_list	*scout;
	int		*a;
	int 	b;

	if (!*begin_list || !(scout = (*begin_list)->next))
		return (0);
	a = &scout->val;
	b = (*begin_list)->val;
	if (c == '+')
		*a += b;
	else if (c == '-')
		*a -= b;
	else if (c == '*')
		*a *= b;
	else if (c == '/')
	{
		if (b == 0)
			return (0);
		*a /= b;
	}
	else if (c == '%')
	{
		if (b == 0)
			return (0);
		*a %= b;
	}
	ft_lstdel(begin_list);
	return (1);
}
