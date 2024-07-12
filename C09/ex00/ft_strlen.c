/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-25 13:25:50 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-25 13:25:50 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
i compte de la lettre 0 jusqu'au \0 dans str.
Ce qui donne la longueur de str.
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// #include <stdio.h>
// int main(int ac, char **av)
// {
// 	if (ac != 2)
// 		return 0;
// 	printf("strlen = %d\n", ft_strlen(av[1]));
// 	return 1;
// }
