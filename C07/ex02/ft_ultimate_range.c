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

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	*tab;
	int	i;

	i = 0;
	tab = 0;
	len = max - min;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * len);
	if (!tab)
		return (0);
	while (min < max)
		tab[i++] = min++;
	*range = tab;
	return (i);
}

