/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-24 14:25:03 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-24 14:25:03 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

/*
La premiere boucle while va incrementer col1 98 fois (c'est la colonne 1)
La deuxieme boucle while va incrementer col2 99 fois (colonne 2)
*/
void	ft_print_comb2(void)
{
	int	col1;
	int	col2;

	col1 = 0;
	col2 = 1;
	while (col1 <= 98)
	{
		while (col2 <= 99)
		{
			ft_putchar(col1 / 10 + 48);
			ft_putchar(col1 % 10 + 48);
			ft_putchar(' ');
			ft_putchar(col2 / 10 + 48);
			ft_putchar(col2 % 10 + 48);
			if (col1 != 98)
				write(1, ", ", 2);
			col2++;
		}
		col1++;
		col2 = col1 + 1;
	}
}

int main(void)
{
	ft_print_comb2();
}