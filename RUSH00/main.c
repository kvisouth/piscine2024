/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-29 14:17:28 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-29 14:17:28 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/* MANDATORY */
void	ft_putchar(char c);
void	rush(int x, int y);

/* BONUS */
void	rush01(int x, int y);
void	rush04(int x, int y);

#include <stdlib.h>
int	main(int ac, char **av)
{
	if (ac != 3)
		return 0;
	rush(atoi(av[1], atoi(av[2])));
	return (0);
}
