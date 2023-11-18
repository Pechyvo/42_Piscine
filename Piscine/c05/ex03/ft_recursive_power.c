/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:02:56 by svalchuk          #+#    #+#             */
/*   Updated: 2023/10/10 21:42:51 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

// #include <stdio.h>
// int main() {
//     int base, exponent;
//     printf("Enter the base: ");
//     scanf("%d", &base);
//     printf("Enter the exponent: ");
//     scanf("%d", &exponent);
//     int result = ft_recursive_power(base, exponent);
//     if (result == 0 && exponent < 0) {
//         printf("Exponentiation with negative exponent is undefined.\n");
//     } else {
//       printf("%d raised to the power of %d is %d\n", base, exponent, result);
//     }
//     return (0);
// }
