/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 21:07:37 by svalchuk          #+#    #+#             */
/*   Updated: 2023/10/01 21:33:40 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_count_args(char **argv)
{
	int	i;
	int	n;

	i = -1;
	n = 0;
	while (argv[1][++i])
	{
		if (argv[1][i] < '0' || argv[1][i] > '9')
			return (-1);
		n++;
		if (argv[1][i + 1] == '\0')
			return (n);
		else if (argv[1][i + 1] != ' ')
			return (-1);
		i++;
	}
	return (n);
}

int	**ft_get_args(char **argv, int size)
{
	int	i;
	int	j;
	int	**tab;

	tab = malloc(sizeof(int *) * (size / 4));
	i = -1;
	j = 0;
	while (argv[1][++i])
	{
		if (j % (size / 4) == 0)
			tab[j / (size / 4)] = malloc(sizeof(int) * (size / 4));
		tab[j / (size / 4)][j % (size / 4)] = argv[1][i] - '0';
		if (argv[1][i + 1] != '\0')
			i++;
		j++;
	}
	return (tab);
}

int	**ft_args(int argc, char **argv, int *size)
{
	int	nargs;
	int	**args;

	if (argc == 2)
	{
		nargs = ft_count_args(argv);
		if (nargs == -1 || nargs % 4 != 0 || nargs < 12)
		{
			return (NULL);
		}
		else
		{
			*size = nargs / 4;
			args = ft_get_args(argv, nargs);
			return (args);
		}
	}
	return (NULL);
}
