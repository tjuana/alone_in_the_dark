/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:25:44 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/22 13:39:29 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	char *p1;
	char *p2;
	char sw = 0;
	int l = 0;

	while (str[l])
		l++;
	p1 = str;
	p2 = str + (l - 1);
	while (p2 > p1)
	{
		sw = *p1;
		*p1 = *p2;
		*p2 = sw;
		p1++;
		p2--;
	}
	return (str);
}
int	main(int c, char **v)
{
	printf("%s", ft_strrev(v[1]));
	return (0);
}
