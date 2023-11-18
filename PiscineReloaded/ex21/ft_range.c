/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:52:17 by svalchuk          #+#    #+#             */
/*   Updated: 2023/11/09 15:19:31 by svalchuk         ###   ########.fr       */
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
	if (arr == NULL)
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

//(int *)malloc(sizeof(int) * (max - min))

// #include <stdio.h>
// int	main(void)
// {
// 	int *arr = ft_range(1, 3);
// 	int i = 0;
// 	while (arr[i])
// 	{
// 		printf("%i", arr[i]);
// 		i++;
// 	}
// 	return (0);
// }
