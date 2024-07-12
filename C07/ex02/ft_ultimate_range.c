/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 07:42:55 by kevisout          #+#    #+#             */
/*   Updated: 2024/07/02 22:52:20 by ubuntu           ###   ########.fr       */
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
		return (0);
	tab = malloc(sizeof(int) * len);
	if (!tab)
		return (-1);
	while (min < max)
		tab[i++] = min++;
	*range = tab;
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	*range;
// 	int	i;
// 	int	len;

// 	i = 0;
// 	len = ft_ultimate_range(&range, 10, 20);
// 	printf("len = %d\n", len);
// 	while (i < len)
// 		printf("%d ", range[i++]);
// 	free(range);
// 	return (0);
// }