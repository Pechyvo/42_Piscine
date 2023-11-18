/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:28:58 by svalchuk          #+#    #+#             */
/*   Updated: 2023/10/07 14:12:01 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	i = argc - 1;
	while (i != 0)
	{
		n = 0;
		while (argv[i][n])
		{
			write(1, &argv[i][n], 1);
			n++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
