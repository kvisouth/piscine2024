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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*
Cette fonction copie src dans dest, de 0 jusqu'a size - 1.
- Elle garantie que le resultat dans dest sera terminee par un \0.


RETOUR:
Cette fonction retourne la longueur de la string qu'il a essaye de creer.
(Donc la longueur de src)
*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && size > 1)
	{
		dest[i] = src[i];
		i++;
		size--;
	}
	if (size > 0)
		dest[i] = '\0';
	return (ft_strlen(src));
}

// #include <stdio.h>
// int	main(void)
// {
// 	char				dest[100] = "BONJOUR";
// 	char				src[100] = "LES OVNIS";
// 	unsigned int		size = 10;

// 	printf("retour de ft_strlcpy : %u", ft_strlcpy(dest, src, size));
// 	return 1;
// }