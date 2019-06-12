/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 17:40:15 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/26 18:24:54 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		chars(int n)
{
	int	c;

	c = (n < 0) ? 2 : 1;
	while (n && (n /= 10))
		c++;
	return (c);
}

char	*ft_strrev(char *s)
{
	char *p1;
	char *p2;
	int	len = 0;
	char sw = 0;

	while (s[len])
		len++;
	p1 = s;
	p2 = s + len - 1;
	while (p2 > p1)
	{
		sw = *p1;
		*p1 = *p2;
		*p2 = sw;
		p1++;
		p2--;
	}
	return (s);
}

char	*ft_itoa(int nbr)
{
	char	*r;
	int		i;
	int		sign;

	i = 0;
	if (!(r = (char *)malloc(sizeof(*r) * (chars(nbr) + 1))))
		return (NULL);
	while (r[i])
		r[i++] = '\0';
	i = 0;
	sign = (nbr < 0) ? 1 : 0;
	while (nbr)
	{
		r[i++] = (nbr % 10) > 0 ? (nbr % 10) + '0' : ((nbr % 10) * (-1)) + '0';
		nbr /= 10;
	}
	if (sign)
		r[i++] = '-';
	if (*r == 0)
		*r = '0';
	return (ft_strrev(r));
}
int	main(int c, char **v)
{
	if (c > 1)
		printf("%s", ft_itoa(atoi(v[1])));
	return (0);
}
