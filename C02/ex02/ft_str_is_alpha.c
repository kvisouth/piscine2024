/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-26 10:56:31 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-26 10:56:31 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return (1);
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}

// #include <stdio.h>
// int main(int ac, char **av)
// {
// 	if (ac != 2)
// 		return 0;
// 	if (ft_str_is_alpha(av[1]) == 1)
// 	{
// 		printf("str is alpha !\n");
// 		return 1;
// 	}
// 	printf("str is not alpha..\n");
// 	return 0;
// }
