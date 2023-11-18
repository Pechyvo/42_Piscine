/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:36:41 by svalchuk          #+#    #+#             */
/*   Updated: 2023/10/05 12:40:40 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	neg;

	i = 0;
	n = 0;
	neg = 0;
	while ((str[i] > 8 && str[i] < 14) || (str[i] == 32))
	{
		i++;
	}
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			neg++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		n = n * 10 + str[i] - 48;
		i++;
	}
	if (neg % 2 != 0)
		return (-n);
	return (n);
}

// OLD Version
// int	ft_atoi(char *str)
// {
// 	int	i;
// 	int	n;
// 	int	neg;

// 	i = 0;
// 	n = 0;
// 	neg = 0;
// 	while ((str[i] > 8 && str[i] < 14) || (str[i] == 32))
// 	{
// 		i++;
// 	}
// 	while ((str[i] != '\0') && (str[i] == 43 || str[i] == 45))
// 	{
// 		if (str[i] == 45)
// 			neg++;
// 		i++;
// 	}
// 	while ((str[i] != '\0') && (str[i] >= 48 && str[i] <= 57))
// 	{
// 		n = n * 10 + str[i] - 48;
// 		i++;
// 	}
// 	if (neg % 2 != 0)
// 		return (-n);
// 	return (n);
// }

/*
#include <stdio.h>

int	main(void) {
	char str1[] = "123";
	char str2[] = "-456";
	char str3[] = "  789  ";
	char str4[] = "0";
	char str5[] = "abc";
	char str6[] = "  +123";
	char str7[] = "  - 789  ";
	char str8[] = "2147483647";  // INT_MAX as a string
	char str9[] = "-2147483648"; // INT_MIN as a string

	int result1 = ft_atoi(str1);
	int result2 = ft_atoi(str2);
	int result3 = ft_atoi(str3);
	int result4 = ft_atoi(str4);
	int result5 = ft_atoi(str5);
	int result6 = ft_atoi(str6);
	int result7 = ft_atoi(str7);
	int result8 = ft_atoi(str8);
	int result9 = ft_atoi(str9);

	printf("Result 1: %d\n", result1);  // Should print "Result 1: 123"
	printf("Result 2: %d\n", result2);  // Should print "Result 2: -456"
	printf("Result 3: %d\n", result3);  // Should print "Result 3: 789"
	printf("Result 4: %d\n", result4);  // Should print "Result 4: 0"
	printf("Result 5: %d\n", result5);
		// Should print "Result 5: 0" (invalid input)
	printf("Result 6: %d\n", result6);  // Should print "Result 6: 123"
	printf("Result 7: %d\n", result7);
		// Should print "Result 7: 0" (invalid input)
	printf("Result 8: %d\n", result8);
		// Should print "Result 8: 2147483647" (INT_MAX)
	printf("Result 9: %d\n", result9);  // Should print "Result 9:
		-2147483648" (INT_MIN)

	return (0);
}
*/