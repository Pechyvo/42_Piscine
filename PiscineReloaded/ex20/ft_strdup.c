/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:51:59 by svalchuk          #+#    #+#             */
/*   Updated: 2023/11/07 16:50:45 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dst;
	int		len;
	int		i;

	len = 0;
	while (src[len])
		len++;
	dst = malloc(sizeof(len + 1));
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

//malloc(sizeof(char) * (len + 1));

// #include <stdio.h>
// int	main(void)
// {
// 	char *str = ft_strdup("hello wrld!");
// 	int i = 0;
// 	while (str[i])
// 	{
// 		printf("%c", str[i]);
// 		i++;
// 	}
// 	return (0);
// }
