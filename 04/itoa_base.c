/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 12:02:21 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/30 12:11:04 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa_base(int value, int base)
{
	long	n;
	int		sign;
	char	*r;
	int		i;

	n = (value > 0) ? value : -(long)value;
	sign = (value < 0) && (base == 10) ? -1 : 0;
	i = (sign == -1) ? 2 : 1;
	while ((n /= base) >= 1)
		i++;
	if (!(r = (char *)malloc(sizeof(char) * (i + 1))))
		return (0);
	n = (value > 0) ? value : -(long)value;
	while (i-- + sign)
	{
		r[i] = ((n % base) > 9) ? (n % base) + 'A' - 10: (n % base) + '0';
	   	n /= base;
	}
	(sign == -1) ? r[i] = '-' : 0;
	return (r);
}
int		main(int ac, char **av)
{
	if (ac == 3)
		printf("%s", ft_itoa_base(atoi(av[1]), atoi(av[2])));
	return (1);
}
