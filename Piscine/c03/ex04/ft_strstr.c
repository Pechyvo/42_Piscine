/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:37:45 by svalchuk          #+#    #+#             */
/*   Updated: 2023/09/29 09:36:41 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i])
	{
		n = 0;
		while (str[i + n] && str[i + n] == to_find[n])
		{
			if (to_find[n + 1] == '\0')
			{
				return (&str[i]);
			}
			++n;
		}
		++i;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	to_find;

// 	char str[] = "alphabet";
// 	to_find = "a";
// 	ft_strstr(str, to_find);
//  printf("%s\n", str);
// 	printf("%s\n", to_find);
// }
