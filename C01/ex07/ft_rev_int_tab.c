/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-25 13:32:15 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-25 13:32:15 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
		ft_swap(&tab[i++], &tab[j--]);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	size;
// 	int	i;
// 	int	tab[6] = {1,2,3,4,5,6};
// 	size = 6;

// 	ft_rev_int_tab(tab, size);
// 	i = 0;
// 	while (i < size)
// 		printf("%d ", tab[i++]);
// }