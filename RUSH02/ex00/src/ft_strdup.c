/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-14 19:05:59 by kevisout          #+#    #+#             */
/*   Updated: 2024-07-14 19:05:59 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	*ft_strdup(char *str)
{
	int		i;
	int		len;
	char	*out;

	len = ft_strlen(str);
	out = malloc((len + 1) * sizeof(char));
	if (!out)
		return (0);
	i = 0;
	while (i < len)
	{
		out[i] = str[i];
		i++;
	}
	out[i] = 0;
	return (out);
}
