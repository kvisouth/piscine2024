/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-03 17:02:18 by kevisout          #+#    #+#             */
/*   Updated: 2024-07-03 17:02:18 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Comment trouver une racine mathematiquement parlant :
Racine de 9 = 3    -> C'est un carrée parfait        --> Retourne 3
Racine de 7 = 2.64 -> Ce n'est pas un carrée parfait --> Retourne 0
On veut retourner le resultat seulement 

46342 c'est la racine carree de INT_MAX + 1 --> ca permet d'aller plus vite
Pour empecher de faire le calcul ou i * i donne un
resultat au dessus de INT_MAX
*/
int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	while (i < nb && i < 46342)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		printf("%d\n", ft_sqrt(atoi(av[1])));
// 	}
// }