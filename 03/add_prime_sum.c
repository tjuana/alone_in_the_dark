/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:10:00 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/22 12:54:29 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *s)
{
	int	r  = 0;

	while (*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	while (*s && (*s >= '0' && *s <= '9'))
		r = r * 10 + ((*s++) - '0');
		return (r);
}

void	ft_pnbr(int n)
{
	if (n > 9)
	{
		ft_pnbr(n / 10);
		ft_pnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

int		prime(int n)
{
	int i = 2;
	
	while (i < n)
	{
		if ((n % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

void	optimus(int n)
{
	int	i = 2;
	int	c = 0;

	while (i <= n)
	{
		if (prime(i))
			c += i;
		i++;
	}
	ft_pnbr(c);
}

int		main(int c,char **v)
{
	if (c == 2)
		optimus(ft_atoi(v[1]));
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);	
}
