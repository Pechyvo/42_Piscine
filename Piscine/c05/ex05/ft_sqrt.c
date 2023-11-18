/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:33:36 by svalchuk          #+#    #+#             */
/*   Updated: 2023/10/11 12:10:43 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i < nb && i <= 46340)
		++i;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

// #include <stdio.h>
// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     int result = ft_sqrt(num);
//     if (result == 0 && num < 0) {
//         printf("Square root is undefined for negative numbers.\n");
//     } else if (result == 0) {
//         printf("The square root of %d is not an integer.\n", num);
//     } else {
//         printf("The square root of %d is %d\n", num, result);
//     }
//     return (0);
// }
