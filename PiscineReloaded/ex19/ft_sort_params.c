/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:52:04 by svalchuk          #+#    #+#             */
/*   Updated: 2023/11/09 15:39:47 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_putchar(char c);
// {
// 	write(1, &c, 1);
// }

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

char	**ft_sort_params(int argc, char **argv)
{
	char	*tmp;
	int		i;

	i = 1;
	while (i < argc)
	{
		while (i < (argc - 1))
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i + 1];
				argv[i + 1] = argv[i];
				argv[i] = tmp;
			}
			i++;
		}
		i = 1;
		argc--;
	}
	return (argv);
}

int	main(int argc, char **argv)
{
	char	**args;
	int		i;

	i = 1;
	args = ft_sort_params(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
