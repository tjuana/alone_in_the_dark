/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_basse2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:09:09 by tjuana            #+#    #+#             */
/*   Updated: 2019/06/06 11:20:40 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa_base(int value)
{
    char *r;
    long n;
    int sign;
    int i;

    n = (value < 0) ? -(long)value : value;
    sign = (value < 0) ? -1 : 0;
    i = (sign == -1) ? 2 : 1;
    while ((n /= 10) >= 1)
        i++;
    if (!(r = (char *)malloc(sizeof(char) * (i + 1))))
        return (NULL);
    r[i] = '\0';
    n = (value < 0) ? -(long)value : value;
    while (i-- + sign)
    {
        r[i] = (n % 10) + '0';
        n /= 10;
    }
    (i == 0) ? r[i] = '-' : 0;
    return (r);
}
int		main(int ac, char **av)
{
	if (ac == 2)
		printf("%s", ft_itoa_base(atoi(av[1])));
	return (1);
}