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

/*
IF 1: SI on est sur la premiere colonne OU la derniere colonne
	ET que on est sur la premiere ou derniere ligne
IF 2: SI on est sur premiere ou derniere ligne
	ET que on est PAS sur la derniere et premiere colonne
IF 3: SI on est sur la premiere et derniere colonne
	ET qu'on est pas sur premiere et derniere ligne
IF 4: SI on est PAS sur la premiere et derniere colonne/ligne
*/
void	rush(int x, int y)
{
	int	colonne;
	int	ligne;

	if (x < 1 || y < 1)
		return ;
	ligne = 1;
	while (ligne <= y)
	{
		colonne = 1;
		while (colonne <= x)
		{
			if ((colonne == 1 || colonne == x) && (ligne == 1 || ligne == y))
				ft_putchar('o');
			if ((ligne == 1 || ligne == y) && (colonne > 1 && colonne < x))
				ft_putchar('-');
			if ((colonne == 1 || colonne == x) && (ligne > 1 && ligne < y))
				ft_putchar('|');
			if ((colonne > 1 && colonne < x) && (ligne > 1 && ligne < y))
				ft_putchar(' ');
			colonne++;
		}
		ft_putchar('\n');
		ligne++;
	}
}

// #include <stdlib.h>
// int main (int ac, char **av)
// {
// 	if (ac != 3)
// 		return 0;
// 	rush(atoi(av[1]), atoi(av[2]));
// }