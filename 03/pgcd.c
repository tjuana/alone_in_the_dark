/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 17:29:27 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/30 11:24:56 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libc.h>

int	pgcd(int a, int b)
{
	int i = a;

	while (i)
	{
		if ((a % i) == 0 && (b % i) == 0)
			return (i);

		i--;
	}
	return (1);
}

int	main(int c, char **v)
{
	if (c == 3)
		printf("%d", pgcd(atoi(v[1]), atoi(v[2])));
	printf("\n");
	return (0);
}
