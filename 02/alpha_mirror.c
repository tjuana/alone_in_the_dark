/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 17:09:36 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/21 17:26:20 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int alpha_mirror(char c)
{
	if (c >= 'a' && c <= 'z')
	   return (c = 'z' - c  + 'a');
	if (c >= 'A' && c <= 'Z')
	   return (c = 'Z' - c  + 'A');

	return (c);
}

int	main(int c, char **v)
{
	if (c == 2)
		while(*v[1])
		{
			*v[1] = alpha_mirror(*v[1]);
			write(1, v[1]++, 1);
		}
	write(1, "\n", 1);
	return (0);
}
