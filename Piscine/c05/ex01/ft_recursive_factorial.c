/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:48:22 by svalchuk          #+#    #+#             */
/*   Updated: 2023/10/10 21:39:00 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>
// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     int result = ft_recursive_factorial(num);
//     if (result == 0 && num < 0) {
//         printf("Factorial is undefined for negative numbers.\n");
//     } else {
//         printf("The factorial of %d is %d\n", num, result);
//     }
//     return (0);
// }
