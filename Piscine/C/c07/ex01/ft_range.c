/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 22:43:47 by svalchuk          #+#    #+#             */
/*   Updated: 2023/10/11 12:45:33 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (!(arr))
		return (NULL);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

// #include <stdio.h>
// int main(void)
// {
//     int min = 5;
//     int max = 15;
//     int *range = ft_range(min, max);
//     if (range == NULL)
//     {
//         printf("Memory allocation failed or invalid range.\n");
//         return (1);
//     }
//     printf("Range from %d to %d: ", min, max);
//     for (int i = 0; i < max - min; i++)
//     {
//         printf("%d", range[i]);
//         if (i < max - min - 1)
//             printf(", ");
//     }
//     printf("\n");
//     free(range); // Don't forget to free the allocated memory.
//     return (0);
// }
