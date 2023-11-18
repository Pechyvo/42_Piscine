/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:45:59 by svalchuk          #+#    #+#             */
/*   Updated: 2023/11/09 15:10:09 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_putchar(char c);
// {
// 	write(1, &c, 1);
// }

void	ft_print_alphabet(void)
{
	int	i;

	i = 97;
	while (i <= 122)
	{
		ft_putchar(i);
		i++;
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }
