/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-26 15:19:07 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-26 15:19:07 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Cette fonction compare les chaines s1 et s2.
Elle renvoie un entier NEGATIF si : s1 est inferieure a s2
Elle renvoie un entier NUL si     : s1 est egale a s2
Elle renvoie un entier POSITIF si : s1 est superieure a s2

En retournant s1[i] - s2[i], on retourne la difference (en ASCII) entre les 2
caracteres.

Si on a s1[i] = 'a' et s2[i] = 'A' on aura : 32 car 97(a) - 65(A) = 32
Le resultat est Positif car 'a' est bien superieur a 'A' dans la table ASCII

Si on a s1[i] = 'B' et s2[i] = 'b' on aura : -32 car 66(B) - 98(b) = -32
Le resultat est Negatif car 'B' est bien inferieur a 'b' dans la table ASCII

Puis pour un resultat nul, si tout les caracteres sont pareils, alors il
retournera une soustraction de lui meme avec lui meme ce qui donne 0.
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	if (ac != 3)
// 		return 0;

// 	printf("ft_strcmp retourne : %d\n", ft_strcmp(av[1], av[2]));

// 	return 1;
// }