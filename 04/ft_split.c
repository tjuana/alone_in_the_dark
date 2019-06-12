/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:30:08 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/28 11:53:18 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		spaces(char c)
{
	return (c == 32 || c == '\t' || c == '\n');
}

int		ft_cw(char *s)
{
	int	c = 0;

	while (*s)
	{
		while ((*s) && spaces(*s))
			s++;
		if ((*s) && !spaces(*s))
		{
			c++;
			while (*s && !spaces(*s))
				s++;
		}
	}
	return (c);
}

char	*ft_words(char *s)
{
	int	i = 0;
	char *word;

	while (s[i] && !spaces(s[i]))
		i++;
	if (!(word = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while ((s[i]) && !spaces(s[i]))
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char    **ft_split(char *str)
{
	char	**r;
	int		i = 0;

	if (!(r = (char **)malloc(sizeof(char *) * (ft_cw(str) + 1))))
		return (NULL);
	while (*str)
	{
		while ((*str) && spaces(*str))
			str++;
		if ((*str) && !spaces(*str))
		{
			r[i] = ft_words(str);
			i++;
			while ((*str) && !spaces(*str))
				str++;
		}
	}
	r[i] = NULL;
	return (r);
}

int		main(int c,char **v)
{
	char **r;

	r = ft_split(v[1]);
 	printf("%s\n", r[0]);
 	printf("%s\n", r[1]);
	printf("%s\n", r[2]);
	printf("%s\n", r[3]);
	printf("%s\n", r[4]);
	return (0);
}
