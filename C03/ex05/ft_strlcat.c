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
	dest_len = 0;
	src_len = 0;
	while (dest[dest_len])
		dest_len++;
	while (src[src_len])
		src_len++;
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

// #include <stdio.h>
// #include <stdlib.h>
// int main(int ac, char **av)
// {
// 	if (ac != 4)
// 		return 0;
// 	int n = atoi(av[3]);
// 	char *dest = av[1];
// 	char *src = av[2];
// 	printf("%d", ft_strlcat(dest, src, n));
// }