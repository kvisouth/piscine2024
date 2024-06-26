/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-26 15:43:55 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-26 15:43:55 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Meme chose que strcmp mais que jusqu'a n
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && i < n - 1)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(int ac, char **av)
// {
// 	if (ac != 4)
// 		return 0;

// 	int n = atoi(av[3]);
// 	printf("ft_strncmp retourne : %d\n", ft_strncmp(av[1], av[2], n));

// 	return 1;
// }