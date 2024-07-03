/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-03 10:45:06 by kevisout          #+#    #+#             */
/*   Updated: 2024-07-03 10:45:06 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*
Faire : nb * ft_recursive_factorial(nb - 1)
Revient en math a faire :
multiplier nb par nb - 1 jusqu'a arriver a nb = 1.
ensuite va "remonter" l'arbre d'appel recursif pour faire
(exemple avec nb = 5) : 1x2x3x4x5 (jusqu'a nb en gros)
                        -------->
*/
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

// int main (int ac, char **av)
// {
// 	if (ac > 1)
// 		printf("%d\n", ft_recursive_factorial(atoi(av[1])));
// }