/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-26 13:46:27 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-26 13:46:27 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Cette fonction copie src dans dest, de 0 jusqu'a size - 1.
- Elle garantie que le resultat dans dest sera terminee par un \0.


RETOUR:
Cette fonction retourne la longueur de la string qu'il a essaye de creer.
(Donc la longueur de src normalement)
*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}
