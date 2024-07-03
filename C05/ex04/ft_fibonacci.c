/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-03 13:15:24 by kevisout          #+#    #+#             */
/*   Updated: 2024-07-03 13:15:24 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Pourquoi appeler la recursivitee avec index - 1 et index - 2 ?
--> Définition formelle (WIKIPEDIA) : 
	La suite de Fibonacci Fn est definie par F0 = 0, F1 = 1, et la relation
	de recurrence : Fn = Fn - 1 + Fn - 2 (d'ou index - 1 et index - 2)
*/
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

#include <stdio.h>
#include <stdlib.h>
int main (int ac, char **av)
{
	if (ac == 2)
	{
		int index = atoi(av[1]);
		printf("%d\n", ft_fibonacci(index));
	}
}