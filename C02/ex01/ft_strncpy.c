/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-25 17:25:42 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-25 17:25:42 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Copier une chaîne
La fonction strncpy() est identique, sauf que seuls les n premiers octets
de src sont copiés. Avertissement : s'il n'y a pas d'octet nul dans
les n premiers octets de src, la chaîne résultante dans dest ne disposera
pas d'octet nul final. 
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(int ac, char **av)
// {
// 	char src[] = "bonjour";
// 	char dest_larger[9];
// 	char dest_good[8];
// 	char dest_smaller[5];

// 	if (ac != 2)
// 		return 0;
// 	int n = atoi(av[1]);

// 	ft_strncpy(dest_larger, src, n);
// 	ft_strncpy(dest_good, src, n);
// 	ft_strncpy(dest_smaller, src, n);
// 	printf("larger   : %s\n",dest_larger);
// 	printf("correct  : %s\n",dest_good);
// 	printf("too small: %s\n",dest_smaller);
// }