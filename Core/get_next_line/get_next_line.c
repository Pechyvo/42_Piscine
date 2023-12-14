/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:41:21 by svalchuk          #+#    #+#             */
/*   Updated: 2023/12/14 12:26:06 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read(int fd, int i);

char	*ft_return(char **rem, int *i, char *place);

char	*ft_check(char **rem, int fd, int i);

char	*get_next_line(int fd)
{
	int			i;
	char		*line;
	static char	*rem;
	
	i = 1;
	line = NULL;
	return (line);
}
