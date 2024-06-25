/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-25 13:03:55 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-25 13:03:55 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Stocker a dans une var temporaire
Remplacer a par b
Affecter b par la var temporaire (qui etait a)
*/
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
