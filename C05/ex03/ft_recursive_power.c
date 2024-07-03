/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-03 12:39:18 by kevisout          #+#    #+#             */
/*   Updated: 2024-07-03 12:39:18 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/*
Faire : nb * ft_recursive_power(nb, power - 1)
Revient en math a faire :
multiplier nb par nb^power-1

Il fait nb * .. * nb, power fois, et power baisse jusqu'a 0.
*/
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

// int main (int ac, char **av)
// {
// 	if (ac > 2)
// 		printf("resultat :%d\n", ft_recursive_power(atoi(av[1]), atoi(av[2])));
// }