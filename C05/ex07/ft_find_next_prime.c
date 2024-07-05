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

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 2 || nb == 2147483647)
		return (1);
	if (nb < 2 || nb % 2 == 0)
		return (0);
	while (i < nb && nb != 0 && (i <= nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb == 2 || nb == 2147483647)
		return (nb);
	if (nb < 0)
		return (2);
	while (1)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		else if (nb < 0)
			return (2);
		nb++;
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