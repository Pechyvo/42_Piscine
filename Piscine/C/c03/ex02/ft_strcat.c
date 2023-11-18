/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:37:18 by svalchuk          #+#    #+#             */
/*   Updated: 2023/09/28 22:15:06 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	n = 0;
	while (src[n])
	{
		dest[i + n] = src[n];
		n++;
	}
	dest[i + n] = '\0';
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char dest[] = "Hello, ";
// 	char src[] = "World!";
// 	ft_strcat(dest, src);
// 	printf("%s\n", dest);
// }
