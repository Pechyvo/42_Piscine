/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:21:39 by svalchuk          #+#    #+#             */
/*   Updated: 2023/11/09 15:10:43 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_putchar(char c);
// {
// 	write(1, &c, 1);
// }

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{
			n = 0;
			while (argv[i][n])
			{
				ft_putchar(argv[i][n]);
				n++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}
