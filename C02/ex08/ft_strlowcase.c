/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-26 11:39:35 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-26 11:39:35 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int main(int ac, char **av)
// {
//     if (ac != 2)
//         return 0;
//     printf("original : %s\n", av[1]);
//     ft_strlowcase(av[1]);
//     printf("upcased  : %s\n", av[1]);
//     return 1;
// }
