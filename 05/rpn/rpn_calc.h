/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn_calc.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 14:07:39 by tjuana            #+#    #+#             */
/*   Updated: 2019/06/12 14:07:40 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef RPN_H
#define RPN_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef	struct		s_list
{
	int				val;
	struct s_list	*next;
}					t_list;

void	ft_lstadd(t_list **begin_list, int val);
void	ft_lstdel(t_list **begin_list);
int		ft_isnum(char *str);
int		ft_isop(char c);
int		ft_operate(t_list **begin_list, char c);

#endif


