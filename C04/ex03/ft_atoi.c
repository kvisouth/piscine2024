/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-26 17:58:46 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-26 17:58:46 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Renvoie 1 si 'c' est un whitespace
(9, 10, 11, 12, 13, 32 dans la table ASCII)
*/
int	is_whitespace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

/*
Renvoie 1 si 'c' est un chiffre
*/
int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
ETAPE 1 : Skip les espacements dit "whitespaces"
ETAPE 2 : Compter nombre pair/impair de symboles + et -
ETAPE 3 : Convertir notre nombre en INT
--> Faire nb*10 + chiffre actuel
	Pour la premiere iteration, ca va faire 0*10=0+chiffre= premier chiffre
*/
int	ft_atoi(char *str)
{
	int	i;
	int	symb;
	int	nb;

	i = 0;
	nb = 0;
	symb = 1;
	while (is_whitespace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			symb *= -1;
		i++;
	}
	while (is_number(str[i]))
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (nb * symb);
}

/*
SUJET:

Vous pouvez comparer votre fonction avec la vrai fonction atoi à part la
partie sur les signes ainsi que l’overflow

Vous ne devriez pas prendre en compte les overflows et les underflows,
le résultat est considérer comme indéfini dans ces cas.
*/
// #include <stdlib.h>
// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	if (ac != 2)
// 		return (0);
// 	printf("atoi    : %d\n", atoi(av[1]));
// 	printf("ft_atoi : %d\n", ft_atoi(av[1]));
// }