/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 19:16:18 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/21 19:46:49 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_bits(unsigned char octet)
{
	int i = 256;
	while (i >>= 1)
		(octet & i) ? write(1, "1", 1) : write(1, "0", 1);
}
int		main(void)
{
	int n = 99;
	print_bits(n);
	write(1, "\n", 1);
}
