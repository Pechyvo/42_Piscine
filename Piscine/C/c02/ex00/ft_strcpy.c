/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:50:51 by svalchuk          #+#    #+#             */
/*   Updated: 2023/09/28 20:54:55 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	dest[10];

// 	char src[] = "World";
// 	printf("%s\n", dest);
// 	ft_strcpy(dest, src);
// 	printf("%s\n", dest);
// }
