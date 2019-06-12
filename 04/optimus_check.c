/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimus_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 11:41:03 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/30 12:02:08 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	optimus_prime(int n)
{
	int prime;

	if (n == 1)
		printf("1");
	else
	{
		prime = 2;
		while (n > 1)
		{
			if ((n % prime) == 0)
			{
				printf("%d", prime);
				n /= prime;
				if (n > 1)
					printf("*");
				prime--;
			}
		prime++;
		}
	}
}

int		main(int c, char **v)
{
	if (c == 2)
		optimus_prime(atoi(v[1]));
	printf("\n");
	return (0);
}
