/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest_pal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 14:05:21 by tjuana            #+#    #+#             */
/*   Updated: 2019/06/12 14:05:24 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "biggest_pal.h"

static int	check_max2(char *s, int *p, int *l)
{
	int	t_l;

	t_l = *l / 2;
	if (*p - (t_l + 1) >= 0 && *p + t_l < ft_strlen(s)
		&& s[*p - (t_l + 1)] == s[*p + t_l])
	{
		*l = 2 * (t_l + 1);
		check_max2(s, p, l);
	}
	return (*l);
}

static int	check_max1(char *s, int *p, int *l)
{
	int	t_l;

	t_l = *l / 2;
	if (*p - (t_l + 1) >= 0 && *p + (t_l + 1) < ft_strlen(s)
		&& s[*p - (t_l + 1)] == s[*p + (t_l + 1)])
	{
		*l = 1 + 2 * (t_l + 1);
		check_max1(s, p, l);
	}
	return (*l);
}

static void	skip_same(char *s, int *p)
{
	int		i;

	i = 0;
	while (s[*p + i] == s[*p])
		i++;
	if (i > 1)
		(*p) = (*p) + i / 2;
	else
		(*p) = (*p) + i / 2;
}

static void	norminette(char *s, int *cur_pos, int *cur_len)
{
	int		tmp_len1;
	int		tmp_len2;

	tmp_len1 = 1;
	tmp_len2 = 1;
	check_max1(s, cur_pos, &tmp_len1);
	check_max2(s, cur_pos, &tmp_len2);
	if (tmp_len1 > tmp_len2)
		*cur_len = tmp_len1;
	else
		*cur_len = tmp_len2;
}

void		find_pal(char *s)
{
	int		cur_pos;
	int		max_pos;
	int		cur_len;
	int		max_len;
	int		total_len;

	cur_pos = 0;
	max_pos = 0;
	max_len = 1;
	total_len = ft_strlen(s);
	while (cur_pos < total_len)
	{
		cur_len = 1;
		skip_same(s, &cur_pos);
		norminette(s, &cur_pos, &cur_len);
		if (cur_len >= max_len)
			max_len = cur_len;
		if (cur_len >= max_len)
			max_pos = cur_pos - (cur_len / 2);
		cur_pos++;
	}
	ft_putstrn(&s[max_pos], max_len);
}