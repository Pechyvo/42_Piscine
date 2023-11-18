/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:37:55 by svalchuk          #+#    #+#             */
/*   Updated: 2023/09/29 11:31:10 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (i < size && dest[i])
	{
		i++;
	}
	while ((i + n + 1) < size && src[n])
	{
		dest[i + n] = src[n];
		n++;
	}
	if (i != size)
	{
		dest[i + n] = '\0';
	}
	return (i + ft_strlen(src));
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
