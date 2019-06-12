/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 13:50:31 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/26 14:05:37 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <libc.h>

int		valid_base(int b, char c)
{
	char dig[17] = "0123456789ABCDEF";
	char dig2[17] = "0123456789abcdef";

	while (b--)
		if (c == dig[b] || c == dig2[b])
			return (1);
	return (0);	
}

char	value(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	else
		return (c);
}

int	ft_atoi_base(const char *str, int str_base)
{
	long 	res = 0;
	int 	sign = 1;
	
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while ((*str == 32) || (*str >= 9 &&  *str <= 13))
		str++;
	while (valid_base(str_base, *str))
		res = res * str_base + value(*str++);
	return (res * sign);	
}

int		main(int c, char **v)
{
	if (c == 1)
		printf("\n");
	printf("%d", ft_atoi_base(v[1], atoi(v[2])));
	return (0);
}
