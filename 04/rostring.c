/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 19:24:36 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/26 19:45:03 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		spaces(char c)
{
	return ((c == 32) || (c >= 9 && c <= 13));
}

void	rostring(char *s)
{
	int	fw = 0;
	int	i = 0;
	while (s[i])
	{
		while (spaces(s[i]))
			i++;
		if (s[i] && !spaces(s[i]))
		{
			if (fw == 0)
				while (s[i] && !spaces(s[i++]))
					fw++;
			else
			{
				while (s[i] && !spaces(s[i]) && write(1, &s[i++], 1));
				write(1, " ", 1);
			}
		}
	}
	i = 0;
	while (spaces(s[i]))
		i++;
	while (fw--)
		write(1, &s[i++], 1);
}

int		main(int c, char **v)
{
	if (c > 1)
		rostring(v[1]);
	write(1, "\n", 1);
	return (0);
}
