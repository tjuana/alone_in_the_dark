/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 16:18:19 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/26 14:44:19 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		len;
	int		*p;

	if (min >= max)
		return (0);
	len = max - min;
	p = (int*)malloc(sizeof(*p) * (len));
	i = 0;
	while (min <= max)
		p[i++] = min++;
	return (p);
}

int	main()
{
	int a[13] = {0};
	int i = 5;
	int *f = a;
	f = ft_range(-1,3);

	while(i--)
		printf("%d ", f[i]);
	return (0);
}
