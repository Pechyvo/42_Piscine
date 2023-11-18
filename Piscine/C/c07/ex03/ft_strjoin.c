/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:02:05 by svalchuk          #+#    #+#             */
/*   Updated: 2023/10/12 01:37:31 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		n;
	int		s;

	str = malloc(sizeof(strs));
	if (!(str))
		return (NULL);
	i = 0;
	s = 0;
	while (i < size)
	{
		n = 0;
		while (strs[i][n])
			str[s++] = strs[i][n++];
		n = 0;
		while (sep[n] && i != size - 1)
			str[s++] = sep[n++];
		i++;
	}
	str[s] = '\0';
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
//     char *strs[] = {"Hello", "world", "of", "programming"};
//     char *sep = " - ";
//     int size = 4;
//     char *result = ft_strjoin(size, strs, sep);
//     if (result == NULL)
//     {
//         printf("Memory allocation failed.\n");
//         return 1;
//     }
//     printf("Joined string: %s\n", result);
//     free(result); // Don't forget to free the allocated memory.
//     return 0;
// }
