/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 19:46:59 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/21 20:06:08 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrev(char *str)
{
	char *p1;
	char *p2;
	int l = 0;
	char sw = 0;

	while (str[l])
		l++;
	p1 = str;
	p2 = str + l - 1;
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
int	main()
{
	char str[] = "987654321";

	printf("%s", ft_strrev(str));
	return (0);
}
