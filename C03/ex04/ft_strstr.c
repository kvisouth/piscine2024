/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-26 16:46:23 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-26 16:46:23 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Localiser to_find dans str.

Retourne un pointeur sur le debut de la string retrouvee.
Retourne NULL si le to_find n'est pas trouvee.
*/
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	if (ac != 3)
// 		return 0;
// 	printf("%s", ft_strstr(av[1], av[2]));
// }