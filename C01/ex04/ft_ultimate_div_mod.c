/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-25 13:12:00 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-25 13:12:00 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Affecter a div, le resultat de l'operation *a / *b
Affter a mod, le resultat de l'operation *a % *b
Puis affecter au pointeur a, la valeur de la variable div
Pareil pour le pointeur b avec mod.
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
