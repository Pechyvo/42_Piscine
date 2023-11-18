/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 21:07:17 by svalchuk          #+#    #+#             */
/*   Updated: 2023/10/01 22:24:19 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		**ft_args(int argc, char **argv, int *nargs);
// void	ft_gen(int **locked, int size);
void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	int	**grid;
	int	size;

	grid = ft_args(argc, argv, &size);
	if (grid != NULL)
	{
		return (0);
	}
	else
		ft_putstr("Error\n");
}
