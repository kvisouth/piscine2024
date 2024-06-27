/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-27 12:15:39 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-27 12:15:39 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc <= 1)
		return (0);
	i = argc - 1;
	while (i > 0)
	{
		ft_putstr(argv[i--]);
		ft_putchar('\n');
	}
	return (1);
}
