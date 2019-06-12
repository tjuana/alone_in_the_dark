/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:20:12 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/29 14:59:54 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int c)
{
	if (c > 9)
	{
		ft_putnbr(c / 10);
		ft_putnbr(c % 10);
	}
	else
		ft_putchar(c % 10 + '0');
}

int	ft_atoi(char *s)
{
	long r = 0;
	int sign = 1;

	while ((*s == 32) && (*s > 9 && *s < 13))
		s++;
	if (*s == '-')
		sign = -1;
	else if (*s == '+' || *s == '-')
		s++;
	while (*s && (*s >= '0' && *s <= '9'))
	{
		r = r * 10;
		r += (*s++) - '0';
		if ((r * 10) < r)
			return (sign < 0) ? 0 : -1;
	}
	return (r * sign);
}

int		prime(int nb)
{
	int i = nb;

	while (--i > 1)
		if (nb % i == 0)
			return (0);
	return (1);
}
void	optimus(int n)
{
	int i = n;
	int c = 0;

	while (i > 1)
	{
		if (prime(i))
			c += i;
		i--;
	}
	ft_putnbr(c);
}
int	main(int c, char **v)
{
	if (c == 2 && ft_atoi(v[1]) > 0)
		optimus(ft_atoi(v[1]));
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
