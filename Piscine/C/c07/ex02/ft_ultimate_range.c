/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 22:59:51 by svalchuk          #+#    #+#             */
/*   Updated: 2023/10/11 13:01:35 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (!(arr))
		return (-1);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	*range = arr;
	return (i);
}

// #include <stdio.h>
// int main(void)
// {
//     int *range = NULL;
//     int min = 5;
//     int max = 10;
//     int len = ft_ultimate_range(&range, min, max);
//     if (len == -1 || range == NULL)
//     {
//     printf("Memory allocation failed or an unexpected error occurred.\n");
//         return (1);
//     }
//     printf("Range from %d to %d (length: %d): ", min, max, len);
//     for (int i = 0; i < len; i++)
//     {
//         printf("%d", range[i]);
//         if (i < len - 1)
//             printf(", ");
//     }
//     printf("\n");
//     free(range);
//     return (0);
// }
