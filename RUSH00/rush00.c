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
#include <limits.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	colonne;
	int	ligne;

	if (x < 1 || y < 1 || y > INT_MAX || x > INT_MAX)
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
