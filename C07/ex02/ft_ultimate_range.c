/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-29 07:42:55 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-29 07:42:55 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	count_len(int a, int b)
{
	int	count;

	if (a > b)
		ft_swap(&a, &b);
	count = a;
	while (count <= b)
		count++;
	return (count);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	*tab;
	int	i;

	len = count_len(min, max);
	if (min > max)
		ft_swap(&min, &max);
	tab = malloc(sizeof(int) * len);
	if (!tab)
		return (-1);
	i = 0;
	while (min < max)
		tab[i++] = min++;
	return (tab);
}
