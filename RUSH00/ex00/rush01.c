/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-30 14:22:08 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-30 14:22:08 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush01(int C, int L)
{
	int	co;
	int	li;

	if (C < 1 || L < 1)
		return ;
	li = 1;
	while (li <= L)
	{
		co = 1;
		while (co <= C)
		{
			if ((li == 1 && co == 1) || (li == L && co == C && L > 1 && C > 1))
				ft_putchar('/');
			if ((li == 1 && co == C && C > 1) || (li == L && co == 1 && L > 1))
				ft_putchar('\\');
			if (((li == 1 || li == L) && (co > 1 && co < C))
				|| ((co == 1 || co == C) && (li > 1 && li < L)))
				ft_putchar('*');
			if ((co > 1 && co < C) && (li > 1 && li < L))
				ft_putchar(' ');
			co++;
		}
		ft_putchar('\n');
		li++;
	}
}
