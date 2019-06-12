/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 19:13:52 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/20 19:25:29 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char ft_register(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	else if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

int	main(int c, char **v)
{
	if (c == 2)
	{
		while (*v[1])
		{
			*v[1] = ft_register(*v[1]);
			write(1, v[1], 1);
			v[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}