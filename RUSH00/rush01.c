/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-29 09:53:22 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-29 09:53:22 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush01(int x, int y)
{
	int	co;
	int	li;

	if (x < 1 || y < 1)
		return ;
	li = 1;
	while (li <= y)
	{
		co = 1;
		while (co <= x)
		{
			if ((li == 1 && co == 1) || (li == y && co == x && y > 1 && x > 1))
				ft_putchar('/');
			if ((li == 1 && co == x && x > 1) || (li == y && co == 1 && y > 1))
				ft_putchar('\\');
			if (((li == 1 || li == y) && (co > 1 && co < x))
				|| ((co == 1 || co == x) && (li > 1 && li < y)))
				ft_putchar('*');
			if ((co > 1 && co < x) && (li > 1 && li < y))
				ft_putchar(' ');
			co++;
		}
		ft_putchar('\n');
		li++;
	}
}

// #include <stdlib.h>
// int main (int ac, char **av)
// {
// 	if (ac != 3)
// 		return 0;
// 	rush01(atoi(av[1]), atoi(av[2]));
// }