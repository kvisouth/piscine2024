/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-24 14:43:20 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-24 14:43:20 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
En gros il va ecrire le premier chiffre nb (celui le plus a gauche)
puis l'enlever. Ainsi de suite jusqu'a ne plus avoir de chiffres.
(Recursivement)
*/
void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

// #include <stdlib.h>
// int	main(int ac, char **av)
// {
// 	int	n;

// 	if (ac <= 1)
// 		return (0);
// 	n = atoi(av[1]);
// 	ft_putnbr(n);
// 	return(0);
// }