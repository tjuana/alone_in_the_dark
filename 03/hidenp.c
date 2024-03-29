/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 17:12:10 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/22 17:28:22 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hiden(char *s1, char *s2)
{
	while (*s2)
	{
		if (*s1 == *s2)
			s1++;
		s2++;
	}
	(*s1 == '\0') ? write(1, "1", 1) : write(1, "0", 1);
}

int		main(int c, char **v)
{
	if (c == 3)
		hiden(v[1], v[2]);
	write(1, "\n", 1);
	return (0);
}
