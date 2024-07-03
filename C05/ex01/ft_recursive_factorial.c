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
Factorielle exemples :
nb = 2!
1x2

nb = 5!
1x2x3x4x5 = 120

nb = 6!
1x2x3x4x5x6 = 720 (c'est 120x6)
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