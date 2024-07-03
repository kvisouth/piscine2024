/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-03 12:39:18 by kevisout          #+#    #+#             */
/*   Updated: 2024-07-03 12:39:18 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	i = 1;
	n = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i++ < power)
		nb = nb * n;
	return (nb);
}

// int main (int ac, char **av)
// {
// 	if (ac > 1)
// 		printf("resultat :%d\n", ft_iterative_power(atoi(av[1]), atoi(av[2])));
// }