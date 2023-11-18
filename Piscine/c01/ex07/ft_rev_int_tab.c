/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:26:42 by svalchuk          #+#    #+#             */
/*   Updated: 2023/09/25 15:41:37 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	first;
	int	last;

	first = 0;
	last = size - 1;
	while (first < last)
	{
		ft_swap(&tab[first], &tab[last]);
		first++;
		last--;
	}
}
