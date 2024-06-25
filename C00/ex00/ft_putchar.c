/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-24 13:17:51 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-24 13:17:51 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
Le premier 1 represente le fd
Le &c represente c (le parametre)
Le deuxieme 1 represente la taille du 2eme arg.
*/

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

// int main (int ac, char **av)
// {
// 	char	c;

// 	if (ac < 2)
// 		return (0);
// 	c = av[1][0];
// 	ft_putchar(c);
// 	return (0);
// }