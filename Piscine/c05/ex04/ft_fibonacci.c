/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:03:01 by svalchuk          #+#    #+#             */
/*   Updated: 2023/10/10 21:44:46 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter the index of the Fibonacci sequence: ");
//     scanf("%d", &n);
//     int result = ft_fibonacci(n);
//     if (result == -1 && n < 0) {
//         printf("Fibonacci sequence is undefined for negative indices.\n");
//     } else {
//         printf("The Fibonacci number at index %d is %d\n", n, result);
//     }
//     return 0;
// }
