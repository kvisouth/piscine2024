/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-03 17:02:18 by kevisout          #+#    #+#             */
/*   Updated: 2024-07-03 17:02:18 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Comment trouver une racine mathematiquement parlant :
Racine de 9 = 3    -> C'est un carrée parfait        --> Retourne 3
Racine de 7 = 2.64 -> Ce n'est pas un carrée parfait --> Retourne 0
On veut retourner le resultat seulement 
*/
int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
