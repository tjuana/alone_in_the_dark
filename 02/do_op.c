/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 18:47:49 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/21 19:14:56 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int c, char **v)
{
	if (c == 4)
	{
		if (*v[2] == '+')
			printf("%d",atoi(v[1]) + atoi(v[3]));
		if (*v[2] == '-')
			printf("%d",atoi(v[1]) - atoi(v[3]));
		if (*v[2] == '*')
			printf("%d",atoi(v[1]) * atoi(v[3]));
		if (*v[2] == '/')
			printf("%d",atoi(v[1]) / atoi(v[3]));
		if (*v[2] == '%')
			printf("%d",atoi(v[1]) % atoi(v[3]));
	}
	printf("\n");
	return (0);
}
