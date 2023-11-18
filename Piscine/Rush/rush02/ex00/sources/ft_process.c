/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:25:27 by svalchuk          #+#    #+#             */
/*   Updated: 2023/10/08 17:16:58 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_get_nb(int fd)
{
	int		i;
	char	c[1];
	char	*str;

	str = malloc(sizeof(char) * 128);
	if (!(str))
		return (NULL);
	i = 0;
	read(fd, c, 1);
	while (c[0] == '\n')
		read(fd, c, 1);
	while (c[0] >= '0' && c[0] <= '9')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	return (str);
}

char	*ft_get_val(int fd, char *c)
{
	int		i;
	char	*str;

	str = malloc(sizeof(char) * 128);
	if (!(str))
		return (NULL);
	i = 0;
	while (c[0] != '\n')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	return (str);
}

t_list	*ft_allocate_and_initialize_tab(int fd)
{
	int		i;
	t_list	*tab;
	char	c[1];
	char	*tmp;

	tab = malloc(sizeof(t_list) * 33);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < 32)
	{
		tab[i].nb = ft_atoi(ft_get_nb(fd));
		read(fd, c, 1);
		while (c[0] == ' ')
			read(fd, c, 1);
		if (c[0] == ':')
			read(fd, c, 1);
		while (c[0] == ' ')
			read(fd, c, 1);
		tmp = ft_get_val(fd, c);
		tab[i].val = ft_strdup(tmp);
		free(tmp);
		i++;
	}
	return (tab);
}

t_list	*ft_process(char *file)
{
	int		fd;
	t_list	*tab;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (NULL);
	tab = ft_allocate_and_initialize_tab(fd);
	close(fd);
	return (tab);
}

// t_list	*ft_process(char *file)
// {
// 	int		i;
// 	int		fd;
// 	char	c[1];
// 	t_list	*tab;
// 	char	*tmp;

// 	fd = open(file, O_RDONLY);
// 	tab = malloc(sizeof(t_list) * 33);
// 	if (fd == -1 || !(tab))
// 		exit(1);
// 	i = 0;
// 	while (i < 32)
// 	{
// 		tab[i].nb = ft_atoi(ft_getnb(fd));
// 		read(fd, c, 1);
// 		while (c[0] == ' ')
// 			read(fd, c, 1);
// 		if (c[0] == ':')
// 			read(fd, c, 1);
// 		while (c[0] == ' ')
// 			read(fd, c, 1);
// 		tmp = ft_getval(fd, c);
// 		tab[i].val = ft_strdup(tmp);
// 		free(tmp);
// 		i++;
// 	}
// 	close(fd);
// 	return (tab);
// }
