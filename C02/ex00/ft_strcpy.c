/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-25 16:57:08 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-25 16:57:08 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Copier une chaîne
La fonction strcpy() copie la chaîne pointée par src
(y compris l'octet nul « \0 » final) dans la chaîne pointée par dest.
Les deux chaînes ne doivent pas se chevaucher.
La chaîne dest doit être assez grande pour accueillir la copie.
Dans le cas où la longueur de src est inférieure à n,
la fin de dest sera remplie avec des octets nuls.
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0'
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char src[] = "bonjour";
// 	char dest_larger[9];
// 	char dest_good[8];
// 	char dest_smaller[5];

// 	ft_strcpy(dest_larger, src);
// 	ft_strcpy(dest_good, src);
// 	ft_strcpy(dest_smaller, src);
// 	printf("larger   : %s\n",dest_larger);
// 	printf("correct  : %s\n",dest_good);
// 	printf("too small: %s\n",dest_smaller);
// }