/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:07:10 by svalchuk          #+#    #+#             */
/*   Updated: 2023/09/20 14:11:30 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nums(int a)
{
	char	*nums;

	nums = "0123456789";
	write(1, nums + a, 1);
}

void	ft_print_dig(int a, int b, int c)
{
	ft_print_nums(a);
	ft_print_nums(b);
	ft_print_nums(c);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_print_dig(a, b, c);
				if (a != 7 || b != 8 || c != 9)
				{
					write(1, ", ", 2);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// }
// 