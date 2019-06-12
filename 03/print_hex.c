/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 17:59:02 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/22 18:17:31 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *s)
{
	long long	r;
	int			sign;

	r = 0;
	sign = 1;
	while ((*s == 32) || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-')
		sign = -1;
	else if (*s == '+' && *s == '-')
		s++;
	while ((*s) && (*s >= '0' && *s <= '9'))
	{
		r = r * 10;
		r += (*s++) - '0';
		if ((r * 10) < r)
			return (sign < 0) ? 0 : -1;	
	}
	return (r);
}

void	print_hex(int c)
{
	if (c > 16)
		print_hex(c / 16);
	c = c % 16;
	c += (c >= 10) ? 'a' - 10 : '0';
	write(1, &c, 1);
}

int		main(int c, char **v)
{
	if (c == 2)
		print_hex(ft_atoi(v[1]));
	write(1, "\n", 1);
	return (0);
}
