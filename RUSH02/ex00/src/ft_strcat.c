/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-13 17:09:42 by kevisout          #+#    #+#             */
/*   Updated: 2024-07-13 17:09:42 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_get_next_line.h"

int	ft_strcat(char *str, char *str1)
{
	int	i;
	int	j;

	if (!str || !str1)
		return (1);
	i = 0;
	while (str[i])
		i++;
	j = 0;
	while (str1[j])
	{
		str[i + j] = str1[j];
		j++;
	}
	str[i + j] = 0;
	return (0);
}
