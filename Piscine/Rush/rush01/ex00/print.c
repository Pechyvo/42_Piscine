/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 21:07:28 by svalchuk          #+#    #+#             */
/*   Updated: 2023/10/01 21:12:04 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_print(int ***table, int size)
{
	int	i;
	int	n;

	i = -1;
	while (++i < size)
	{
		n = -1;
		while (++n < size)
		{
			ft_putchar(table[0][i][n] + '0');
			if (n != size - 1)
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
