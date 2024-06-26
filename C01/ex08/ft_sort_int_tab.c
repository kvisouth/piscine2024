/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-26 10:04:28 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-26 10:04:28 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}

// #include <stdio.h>
// int main()
// {
//     int tab[10] = {1, 5, 3, 4, 2, 6, 8, 7, 9, 0};
//     int i = 0;
//     ft_sort_int_tab(tab, 10);
//     while (i < 10)
//     {
//         printf("%d\n", tab[i]);
//         i++;
//     }
//     return 0;
// }
