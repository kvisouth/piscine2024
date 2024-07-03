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
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	x;

	i = 1;
	x = 1;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (i < nb)
	{
		x *= i + 1;
		i++;
	}
	return (x);
}

// int main (int ac, char **av)
// {
// 	if (ac > 1)
// 		printf("%d\n", ft_iterative_factorial(atoi(av[1])));
// }