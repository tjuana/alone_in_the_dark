/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 17:27:25 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/21 20:20:29 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int *tab, unsigned int len)
{
	int m = tab[len - 1];

	if (!len)
		return (0);
	while (len--)
	{
		if (tab[len] > m)
			m = tab[len];
	}
	return (m);
}
int		main(void)
{
		int	*tab;

		if (!(tab = (int*)malloc(sizeof(int) * 3)))
		return (0);
		tab[0] = 7;
		tab[1] = 6;
		tab[2] = 4;
		printf("%d", max(tab, 3));
								return (0);
}
