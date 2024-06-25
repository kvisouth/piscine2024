/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-24 13:20:59 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-24 13:20:59 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

// #include <stdlib.h>
// int	main(int ac, char **av)
// {
// 	int	n;

// 	if (ac <= 1)
// 		return (0);
// 	n = atoi(av[1]);
// 	ft_is_negative(n);
// 	return(0);
// }