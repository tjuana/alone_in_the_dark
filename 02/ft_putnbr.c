/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:02:30 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/22 13:24:26 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *s)
{
	unsigned long long r = 0;
	int sign = 1;

	while ((*s == 32) || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-')
		sign = -1;
	if (*s == '+' || *s == '-')
		s++;
	while (*s && (*s >= '0' && *s <= '9'))
	{
		r = r * 10;
		r += ((*s++) - '0');
		if (r > (r * 10))
			return (sign < 0) ? 0 : -1;
	}
	return (r * sign);
}

void	ft_putnbr(int nbr)
{
	unsigned int n = 0;
	
	if (nbr < 0)
		ft_putchar('-');
	n = (nbr < 0) ? (nbr * (-1)) : nbr;
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

int	main(int c, char **v)
{
	ft_putnbr(ft_atoi(v[1]));
	return (0);
}
