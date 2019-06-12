/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:48:44 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/22 14:26:58 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		space(char c)
{
	return ((c == 32) || (c >= 9 && c <= 13));
}

void	epur(char *s)
{
	while ((*s) && space(*s))
		s++;
	while(*s)
	{
		if ((!space(*s) || (!space(*(s + 1)) && *(s + 1))))
			write(1, s, 1);
		//if (!space(*(s + 1)))
		//	write(1, s, 1);
		s++;
	}
}

int		main(int c, char **v)
{
	if (c == 2)
		epur(v[1]);
	write(1, "\n", 1);
	return (0);
}
