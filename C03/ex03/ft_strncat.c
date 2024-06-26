/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-26 16:16:44 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-26 16:16:44 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Pareil que strcat sauf :
- Va utiliser nb octet de src
- src ne doit pas terminer par un NULL si il contient n octets ou +
*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(int ac, char **av)
// {
// 	if (ac != 2)
// 		return 0;
// 	int n = atoi(av[1]);
// 	char dest[100] = "je m'apelle ";
// 	char src[10] = "ovni";
// 	printf("%s", ft_strncat(dest, src, n));
// }