/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:28:16 by svalchuk          #+#    #+#             */
/*   Updated: 2023/09/30 16:10:17 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	res;

	res = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		res = -nb;
	}
	if (res <= 9)
	{
		ft_putchar(res + 48);
	}
	if (res >= 10)
	{
		ft_putnbr(res / 10);
		ft_putnbr(res % 10);
	}
}

// Old
// void	ft_putnbr(long int nb)
// {
// 	if (nb < 0)
// 	{
// 		ft_putchar('-');
// 		nb = -nb;
// 	}
// 	if (nb >= 10)
// 	{
// 		ft_putnbr(nb / 10);
// 		nb = nb % 10;
// 	}
// 	if (nb < 10)
// 	{
// 		ft_putchar(nb + 48);
// 	}
// }

// int	main(void)
// {
// 	ft_putnbr(-2147483648);
// }
