/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:25:18 by svalchuk          #+#    #+#             */
/*   Updated: 2023/10/08 17:19:01 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int		nb;
	char	*val;
}			t_list;
int			ft_atoi(const char *str);
char		*ft_strdup(char *src);
void		ft_putchar(char c);
void		ft_putstr(char *str);
char		*ft_get_nb(int fd);
char		*ft_get_val(int fd, char *c);
t_list		*ft_process(char *file);

#endif
