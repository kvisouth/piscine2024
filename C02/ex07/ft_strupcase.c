/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-26 11:28:20 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-26 11:28:20 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
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
//     ft_strupcase(av[1]);
//     printf("upcased  : %s\n", av[1]);
//     return 1;
// }
