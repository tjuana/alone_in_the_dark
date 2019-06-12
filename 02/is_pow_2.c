/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_pow_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 20:10:26 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/23 11:39:59 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	    is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while ((n % 2) == 0)
		n /= 2;
	return ((n == 1) ? 1 : 0);
}
int main(int c, char **v)
{
	printf("%d", is_power_of_2(atoi(v[1])));
	return (0);
}