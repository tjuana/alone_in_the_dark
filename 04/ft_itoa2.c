/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:36:45 by tjuana            #+#    #+#             */
/*   Updated: 2019/06/06 11:26:53 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	char	*s;
	int		sign;
	long	n;
	int		i;

	sign = (nbr < 0) ? -1 : 0;
	i = (sign == -1) ? 2 : 1;
	n = (nbr < 0) ? -(long)nbr : nbr;
	while ((n /= 10) >= 1)
		i++;
	if (!(s = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	s[i] = '\0';
	n = (nbr < 0) ? -(long)nbr : nbr;
	while (i-- + sign)
	{
		s[i] = n % 10 + '0';
		n /= 10;
	}
	(i == 0) ? s[i] = '-' : 0;
	return (s);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		printf("%s", ft_itoa(atoi(av[1])));
	return (0);
}
