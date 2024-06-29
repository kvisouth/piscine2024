/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-28 10:02:37 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-28 10:02:37 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
	while (a <= b)
		count++;
	return (count);
}

int	*ft_range(int min, int max)
{
	int	len;
	int	*tab;
	int	i;

	len = count_len;
	if (min > max)
		ft_swap(&min, &max);
	tab = malloc(sizeof(int) * len);
	if (!tab)
		return (0);
	i = 0;
	while (min < max)
		tab[i++] = min++;
	return (tab);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	
}
