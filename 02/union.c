/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 16:43:30 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/21 17:05:55 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	see_me(char *s1, int pos, char c)
{
	int i = -1;

	while (++i < pos)
		if (s1[i] == c)
			return (0);
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int i = -1;
	int j = -1;

	while (s1[++i])
		if (see_me(s1, i, s1[i]))
			write(1, &s1[i], 1);
	while (s2[++j])
		if (see_me(s1, i, s2[j]) && see_me(s2, j, s2[j]))
			write(1, &s2[j], 1);
}

int	main(int c, char **v)
{
	if (c == 3)
		ft_union(v[1], v[2]);
	write(1, "\n", 1);
	return (0);
}
