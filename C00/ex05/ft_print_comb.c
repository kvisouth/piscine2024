/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-24 13:59:13 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-24 13:59:13 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
Le '+48' est une conversion de la POSITION sur le tableau ASCII vers
la valeur du chiffre en question sur le tableau ASCII.

La condition fait en sorte d'afficher un espacement ', ' tant que
notre nombre n'EST PAS '789'
*/
void	ft_putchar_multiple(char x, char y, char z)
{
	ft_putchar(x + 48);
	ft_putchar(y + 48);
	ft_putchar(z + 48);
	if (x != 7 || y != 8 || z != 9)
		write(1, ", ", 2);
}

/*

*/
void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	while (x <= 7)
	{
		y = x + 1;
		while (y <= 8)
		{
			z = y + 1;
			while (z <= 9)
			{
				ft_putchar_multiple(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}

int	main(void)
{
	ft_print_comb();
}
