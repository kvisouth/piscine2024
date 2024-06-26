/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-26 15:53:36 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-26 15:53:36 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Concatene 2 chaines entre elles.
Ajoute src apres dest.
dest doit avoir assez de place pour le resulat, sinon buffer overrun. (PAS SAFE)
*/
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char dest[100] = "je m'apelle ";
// 	char src[10] = "ovni";
// 	printf("%s\n", ft_strcat(dest, src));
// }