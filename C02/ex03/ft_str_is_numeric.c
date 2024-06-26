/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-26 11:14:28 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-26 11:14:28 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return (1);
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
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
// 	if (ft_str_is_numeric(av[1]) == 1)
// 	{
// 		printf("str is numeric !\n");
// 		return 1;
// 	}
// 	printf("str is not numeric..\n");
// 	return 0;
// }
