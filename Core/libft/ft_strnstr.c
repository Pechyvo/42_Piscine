/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:26:01 by svalchuk          #+#    #+#             */
/*   Updated: 2023/11/18 15:34:15 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (needle[0] == '\0' || needle == NULL)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		n = 0;
		while (haystack[i + n] && needle[n]
			&& haystack[i + n] == needle[n] && i + n < len)
			n++;
		if (n == ft_strlen(needle))
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main() {
//     const char haystack[] = "Hello, World!";
//     const char needle[] = "World";
//     size_t len = strlen(haystack);

//     // Using your custom ft_strnstr function
//     char *result_ft = ft_strnstr(haystack, needle, len);

//     // Using the standard library's strnstr function
//     char *result_std = strnstr(haystack, needle, len);

//     printf("Custom ft_strnstr - Result: %s\n", result_ft);
//     printf("Standard strnstr - Result: %s\n", result_std);

//     return 0;
// }
