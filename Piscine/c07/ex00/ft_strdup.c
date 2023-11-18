/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 22:29:13 by svalchuk          #+#    #+#             */
/*   Updated: 2023/10/10 23:15:38 by svalchuk         ###   ########.fr       */
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
	dst = malloc(sizeof(char) * (len + 1));
	if (!(dst))
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

// #include <stdio.h>
// int main(void)
// {
//     char *original = "Hello, World!";
//     char *duplicate = ft_strdup(original);
//     if (duplicate == NULL)
//     {
//     printf("Memory allocation failed. Unable to duplicate the string.\n");
//         return (1);
//     }
//     printf("Original string: %s\n", original);
//     printf("Duplicated string: %s\n", duplicate);
//     free(duplicate); // Don't forget to free the allocated memory.
//     return (0);
// }
