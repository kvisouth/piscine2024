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
1ere condition :
Si nb est egal a INT_MIN : Va write de force ce nombr

2eme condition :
Si nb est un chiffre (0, 1, 2 ... 9), alors il va simplement l'ecrire

3eme condition :
Si nb est negatif, putchar un signe '-', puis convertit nb en positif

4eme condition :
SINON Recursivitee en divisant nb par 10
Puis Recursivitee en faisant modulo nb par 10
(Ca va appeler ft_putnbr jusqu'a qu'il reste le nombre le plus a gauche,
Puis l'ecrire, et ecrire du chiffre du plus a gauche vers la droite..)
*/
void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + 48);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
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