/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:36:59 by svalchuk          #+#    #+#             */
/*   Updated: 2023/10/05 12:15:41 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_validation(char *base)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		n = i + 1;
		if (base[i] == 43 || base[i] == 45)
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[n])
		{
			if (base[i] == base[n])
				return (0);
			n++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	long	n;

	i = 0;
	n = nbr;
	if (ft_validation(base))
	{
		if (n < 0)
		{
			ft_putchar('-');
			n *= -1;
		}
		while (base[i])
			i++;
		if (n < i)
		{
			ft_putchar(base[n]);
		}
		if (n >= i)
		{
			ft_putnbr_base(n / i, base);
			ft_putnbr_base(n % i, base);
		}
	}
}

// int main(void)
// {
//     char base[] = "0123456789"; // Decimal base
//     int num1 = 0;
//     int num2 = -12345;
//     int num3 = 54321;

//     ft_putnbr_base(num1, base); // Should print '0'
//     ft_putchar('\n');

//     ft_putnbr_base(num2, base); // Should print '-12345'
//     ft_putchar('\n');

//     ft_putnbr_base(num3, base); // Should print '54321'
//     ft_putchar('\n');

//     return (0);
// }
