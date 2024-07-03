/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-28 09:14:46 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-28 09:14:46 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*str;

	len = ft_strlen(src);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	str = ft_strcpy(str, src);
	return (str);
}

// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	if (ac != 2)
// 		return (0);
// 	char	*copy;
// 	copy = ft_strdup(av[1]);
// 	printf("%s\n", copy);
// 	free(copy);
// 	return (1);
// }