/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:12:25 by svalchuk          #+#    #+#             */
/*   Updated: 2023/09/21 12:27:31 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_calc_char(int nb)
{
	int	frst;
	int	scnd;

	if (nb > 9)
	{
		frst = nb / 10;
		scnd = nb % 10;
		ft_putchar(frst + 48);
		ft_putchar(scnd + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(nb + 48);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_calc_char(a);
			ft_putchar(' ');
			ft_calc_char(b);
			if (a < 98)
			{
				write(1, ", ", 2);
			}
			++b;
		}
		++a;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// }
//