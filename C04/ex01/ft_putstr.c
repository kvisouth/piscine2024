/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-25 13:13:08 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-25 13:13:08 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
Fais putchar en boucle de la premiere a la derniere lettre.
i est le compteur
*/
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

// int main (int ac, char **av)
// {
// 	if (ac != 2)
// 		return 0;
// 	ft_putstr(av[1]);
// 	return 1;
// }