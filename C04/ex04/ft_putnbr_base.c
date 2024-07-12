/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:00:02 by ubuntu            #+#    #+#             */
/*   Updated: 2024/07/08 17:27:55 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (nbr >= ft_strlen(base))
		ft_putnbr_base(nbr / ft_strlen(base), base);
	ft_putchar(base[nbr % ft_strlen(base)]);
}

#include <stdlib.h>
int main (int ac, char **av)
{
	if (ac != 3)
		return 0;
	ft_putnbr_base(atoi(av[1]), av[2]);
}