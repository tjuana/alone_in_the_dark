/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 18:32:04 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/28 14:35:16 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		go_to(char *o, int r)
{
	int	b = 0;

	if (o[r] == '[')
	{
		r++;
		while (!(o[r] == ']' && b == 0))
		{
			if (o[r] == '[')
				b++;
			else if (o[r] == ']')
				b--;
			r++;
		}
		r--;
	}
	else if (o[r] == ']')
	{
		r--;
		while (!(o[r] == '[' && b == 0))
		{
			if (o[r] == ']')
				b++;
			else if (o[r] == '[')
				b--;
			r--;
		}
		r--;
	}
	return (r);
}

void	brainfuck(char *op)
{
	int		point = 0;
	int		c = 0;
	char	bytes[2048];

	while (c <= 2048)
		bytes[c++] = 0;
	c = 0;
	while (op[c])
	{
		if (op[c] == '>')
			point++;
		else if (op[c] == '<')
			point--;
		else if (op[c] == '+')
			bytes[point]++;
		else if (op[c] == '-')
			bytes[point]--;
		else if (op[c] == '.')
			write(1, &bytes[point], 1);
		else if (op[c] == '[')
		{
			if (bytes[point] == 0)
				c = go_to(op, c);
		}
		else if (op[c] == ']')
		{
			if (bytes[point] != 0)
				c = go_to(op, c);
		}
		c++;
	}
}

int		main(int c, char **v)
{
	if (c == 2)
		brainfuck(v[1]);
	else
		//write(1, "\n", 1);
	return (0);
}
