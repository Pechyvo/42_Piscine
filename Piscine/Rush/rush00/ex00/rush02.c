/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalchuk <svalchuk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:23:59 by svalchuk          #+#    #+#             */
/*   Updated: 2023/09/24 15:12:53 by svalchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Including Function
void	ft_putchar(char c);

// Creating Function
void	rush(int x, int y)
{
	int	w;
	int	l;

	if (x <= 0 || y <= 0)
		return ;
	w = 1;
	while (w <= y)
	{
		l = 1;
		while (l <= x)
		{
			if ((w == 1 && l == 1) || (w == 1 && l == x))
				ft_putchar('A');
			else if ((w == y && l == x && x > 1 && y > 1) || (w == y && l == 1))
				ft_putchar('C');
			else if (w == 1 || w == y || l == 1 || l == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			l++;
		}
		ft_putchar('\n');
		w++;
	}
}

/*
	"w" stands for width
	"l" stands for length

	If inputs are equal or less than zero return nothing

	How "if", "else if" and "else" statements work
		(Program executes statements from first till last(1 to 3))
		1. "if" statement is executed for specific conditions
		2. "else if" statements is executed for other conditions
		3. "else" statement is executed for all other unspecified conditions

	If statement for printing "A":
		1. If it is first letter in first row
				(Length and width equals to 1)
		2. If it is last letter in first row
				(Width equals to 1 and length equals to "x")

	Else if statement for printing "C":
		1. If it is last letter in last row
				(Equals to inputs of "x" and "y" and is greater than 1)
		2. If it is first letter in last row
				(Width equals to "y" and length equals to 1)

	Else if statement for printing "B":
		1. If width equals to 1
		2. If width equals to "y"
		3. If length equals to 1
		4. If length equals to "x"

	Else program just prints space
*/