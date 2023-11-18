/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:34:51 by svalchuk          #+#    #+#             */
/*   Updated: 2023/09/28 20:55:01 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
	{
		return (i);
	}
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int		r;
// 	char	dest[10];

// 	char src[] = "";
// 	r = ft_strlcpy(dest, src, 6);
// 	printf("%s\n", dest);
// 	printf("%d\n", r);
// }
