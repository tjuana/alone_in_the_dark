/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:16:21 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/22 12:55:46 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	sign = 1;
	int res = 0;

	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= 0 && (*str >= '0' && *str <= '9'))
	{
		res = res * 10;
		res += ((*str++) - '0');
		if ((res * 10) < res)
			return (sign > 0) ? (-1) : 0;
	}
	return(res * sign);
}
int	main()
{
	char str[] = "2222222222222222222222";

	printf("%d\n", ft_atoi(str));
	printf("%d", atoi(str));
	return (0);
}
