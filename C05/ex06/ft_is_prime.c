/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-03 17:17:26 by kevisout          #+#    #+#             */
/*   Updated: 2024-07-03 17:17:26 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Un nombre premier est donc un nombre dont ses SEULS diviseurs
sont 1 et lui-même.
(Son diviseur est FORCEMENT plus petit que ce nombre)

On met 46342 pour que ce soit plus rapide :

*/
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 2 || nb == 2147483647)
		return (1);
	if (nb < 2 || nb % 2 == 0)
		return (0);
	while (i < nb && i < 46342)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		printf("%d\n", ft_is_prime(atoi(av[1])));
// 	}
// }