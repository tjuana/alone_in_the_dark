/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 14:45:59 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/26 14:56:51 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int	i;
	int	len;
	int	*p;
	
	if (start >= end)
		return (0);
	len = end - start;
	if (!(p = (int *)malloc(sizeof(*p) * len)))
		return (NULL);
	i = 0;
	while (start <= end)
		p[i++] = end--;
	return (p);
}
int	main()
{
	int a[13] = {0};
	int i = 0;
	int *f = a;
	f = ft_range(0,0);

	//while(i--)
		printf("%d ", f);
	return (0);
}
