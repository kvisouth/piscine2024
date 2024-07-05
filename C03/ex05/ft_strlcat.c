/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 22:35:25 by ubuntu            #+#    #+#             */
/*   Updated: 2024/07/02 22:46:55 by ubuntu           ###   ########.fr       */
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
FONCTION : Va concatener src a dest.
- Va copier src a la fin de dest.
- Va ajouter un NULL a la fin de dest.
- Va copier au max size - strlen(dest) - 1 octets de src.

RETOURS :
Si : size <= strlen(dest), retourne size + strlen(src).
Sinon : retourne strlen(dest) + strlen(src).
*/
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (size + src_len);
	while (src[i] && (dest_len + i) < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/* Il faut compiler avec le flag -lbsd */
// #include <stdio.h>
// #include <stdlib.h>
// #include <bsd/string.h>
// int main(int ac, char **av)
// {
// 	if (ac != 4)
// 		return 0;
// 	int n = atoi(av[3]);
// 	char *dest = av[1];
// 	char *src = av[2];
// 	char *dest2 = strdup(av[1]);
// 	char *src2 = strdup(av[2]);
// 	printf("ORIGINAL : return = %ld | dest =%s\n",
//  	strlcat(dest2, src2, n), dest2);
// 	printf("REPLIQUE : return = %d | dest =%s\n",
// 	ft_strlcat(dest, src, n), dest);
// }