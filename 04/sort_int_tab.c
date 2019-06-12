/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 19:05:35 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/26 19:11:03 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	sw;


	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				sw = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = sw;
			}
			j++;
		}
		i++;
	}
}

#include <stdio.h>
int		main(void)
{
	int tab[] = { -1, 6, 7, 8, -77, 7, 32, 4, 5, 2147483647, -2147483648 };
	unsigned int size = 11;

	sort_int_tab(tab, size);

	unsigned int i = 0;
	while (i < size)
	{
		printf("element %d: %d\n", i, tab[i]);
		i++;
	}
	return 0;
}
