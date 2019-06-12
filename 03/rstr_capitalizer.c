/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 18:32:29 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/26 15:07:13 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		space(char c)
{
	return ((c == 32) || (c >= 9 && c <= 13));
}

char	to_upp(char c)
{
	return (c -= (c >= 'a' && c <= 'z') ? 32 : 0);
}

char	to_low(char c)
{
	return (c += (c >= 'A' && c <= 'Z') ? 32 : 0);
}

void	capit(char *s)
{
	while (*s)
	{
		if (space(*s))
			ft_putchar(*s);
		else if (!space(*s) && space(*(s + 1)))
			ft_putchar(to_upp(*s));
		else if (!space(*s) && !space(*(s + 1)))
				ft_putchar(to_low(*s));

		else if (*(s + 1) == '\0')
			ft_putchar(to_upp(*s));

		s++;
	}
}
int		main(int c, char **v)
{
	if (c > 1)
	{
		v++;
		while (*v)
		{
			capit(*v++);
			write(1, "\n", 1);
		}
	}
	return (0);
}
