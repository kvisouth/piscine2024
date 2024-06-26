/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-26 11:40:25 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-26 11:40:25 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*
Premiere condition : Verification pour le 1er caractere de la chaine
Met en maj si c'est une lettre minuscule

Dans le while,
Premiere condition :-Si on est sur une lettre (quelconque)
					-Precedee par un caractere ASCII < 0
					-Precedee par un caractere ASCII entre 9 et A
					-Precedee par un caractere ASCII entre Z et a
					-Precedee par un caractere ASCII > z
					(Un symbole enfait)
	Condition imbriquee :	-Si c'est une lettre minuscule --> Met en MAJ

Deuxieme condition (else if) : Si c'est une lettre Majuscule --> Met en MIN
(Sachant qu'elle ne valide aucune condition au dessus.)

Puis passe a la prochaine lettre, boucle
*/
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z' && str[i] != '\0')
	{
		str[i] = str[i] -32;
		i++;
	}
	while (str[i] != '\0')
	{
		if ((ft_isalpha(str[i]))
			&& ((str[i - 1] < '0')
				|| (str[i - 1] > '9' && str[i - 1] < 'A')
				|| (str[i - 1] > 'Z' && str[i - 1] < 'a')
				|| (str[i - 1] > 'z')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int main (int ac, char **av)
// {
// 	if (ac != 2)
// 		return 0;
// 	printf("%s", ft_strcapitalize(av[1]));
// 	return 1;
// }