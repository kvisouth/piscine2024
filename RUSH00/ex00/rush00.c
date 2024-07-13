/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-30 13:37:43 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-30 13:37:43 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int C, int L)
{
	int	colonne;
	int	ligne;

	if (C < 1 || L < 1)
		return ;
	ligne = 1;
	while (ligne <= L)
	{
		colonne = 1;
		while (colonne <= C)
		{
			if ((colonne == 1 || colonne == C) && (ligne == 1 || ligne == L))
				ft_putchar('o');
			if ((ligne == 1 || ligne == L) && (colonne > 1 && colonne < C))
				ft_putchar('-');
			if ((colonne == 1 || colonne == C) && (ligne > 1 && ligne < L))
				ft_putchar('|');
			if ((colonne > 1 && colonne < C) && (ligne > 1 && ligne < L))
				ft_putchar(' ');
			colonne++;
		}
		ft_putchar('\n');
		ligne++;
	}
}
