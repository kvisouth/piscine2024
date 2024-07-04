/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-04 16:06:30 by kevisout          #+#    #+#             */
/*   Updated: 2024-07-04 16:06:30 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 2)
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

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (nb < INT_MAX)
	{
		if (ft_is_prime(i) == 1)
			return (i);
		i++;
	}
	return (0);
}

// #include <stdlib.h>
// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 		printf("%d\n", ft_find_next_prime(atoi(av[1])));
// }