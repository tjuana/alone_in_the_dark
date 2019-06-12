/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 17:18:06 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/30 11:34:27 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	optimus(unsigned int n)
{
	unsigned int pr;

	if (n == 1)
		printf("1");
	else
	{
		pr = 2;
		while (n > 1)
		{
			if ((n % pr) == 0)
			{
				printf("%d", pr);
				n /= pr;
				if (n > 1)
					printf("*");
				pr--;
			}
			pr++;
		}
	}
}

int		main(int c, char **v)
{
	if (c == 2 && *v[1])
		optimus(atoi(v[1]));
	printf("\n");
	return (0);
}
