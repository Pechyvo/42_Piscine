/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:28:08 by svalchuk          #+#    #+#             */
/*   Updated: 2023/10/07 14:07:56 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	i = 1;
	while (argv[i])
	{
		n = 0;
		while (argv[i][n] && argc)
		{
			write(1, &argv[i][n], 1);
			n++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
