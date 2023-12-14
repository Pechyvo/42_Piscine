/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:41:19 by svalchuk          #+#    #+#             */
/*   Updated: 2023/12/14 11:26:06 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (&((char *)s)[i]);
		i++;
	}
	if (s[i] == (char)c)
		return (&((char *)s)[i]);
	else
		return (NULL);
}

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dst;

	dst = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str || !s)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + 1];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		n;
	char	*str;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str || !s1 || !s2)
		return (NULL);
	i = 0;
	n = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[i])
	{
		str[i + n] = s2[n];
		n++;
	}
	str[i + n] = '\0';
	return (str);
}
