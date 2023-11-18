/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:02:57 by svalchuk          #+#    #+#             */
/*   Updated: 2023/10/10 21:42:37 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb *= i;
		power--;
	}
	return (nb);
}

// #include <stdio.h>
// int main() {
//     int base, exponent;
//     printf("Enter the base: ");
//     scanf("%d", &base);
//     printf("Enter the exponent: ");
//     scanf("%d", &exponent);
//     int result = ft_iterative_power(base, exponent);
//     if (result == 0 && exponent < 0) {
//         printf("Exponentiation with negative exponent is undefined.\n");
//     } else {
//       printf("%d raised to the power of %d is %d\n", base, exponent, result);
//     }
//     return 0;
// }
