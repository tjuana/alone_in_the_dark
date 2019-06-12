/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 14:05:36 by tjuana            #+#    #+#             */
/*   Updated: 2019/06/12 14:05:37 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "biggest_pal.h"

void	ft_putstrn(char *str, int len)
{
	int		i;

	i = 0;
	while (i < len)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_strlen(char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		find_pal(argv[1]);
	}
	ft_putstrn("\n", 1);
	return (0);
}