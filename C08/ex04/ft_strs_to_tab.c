/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-09 13:29:54 by kevisout          #+#    #+#             */
/*   Updated: 2024-07-09 13:29:54 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(ft_strlen(src) + 1);
	if (!str)
		return (0);
	while (i != ft_strlen(src))
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	i = 0;
	tab = malloc((ac + 1) * sizeof(t_stock_str));
	if (!tab)
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].copy = ft_strdup(av[i]);
		if (!tab[i].copy)
			return (NULL);
		tab[i].str = av[i];
		i++;
	}
	tab[i].str = 0;
	return (tab);
}

// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	if (ac == 0)
// 		return (1);

// 	int i = 0;
// 	t_stock_str *tab;
// 	tab = ft_strs_to_tab(ac, av);
// 	(void)i;

// 	printf("ac = %d\n", ac);
// 	while (i < ac)
// 	{
// 		printf("\ntab[%d]:\n", i);
// 		printf("str :%s\n", tab[i].str);
// 		printf("copy :%s\n", tab[i].copy);
// 		printf("size :%d\n", tab[i].size);
// 		i++;
// 	}
// }

/* Main pour l'exercice suivant */
// int	main(int ac, char **av)
// {
// 	if (ac == 0)
// 		return (1);
// 	t_stock_str *tab;
// 	tab = ft_strs_to_tab(ac, av);
// 	ft_show_tab(tab);
// }
