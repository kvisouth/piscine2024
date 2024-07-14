/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-14 15:00:39 by kevisout          #+#    #+#             */
/*   Updated: 2024-07-14 15:00:39 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_get_next_line.h"
#include "rush.h"

void	*ft_realloc(char **str, unsigned int size)
{
	char			*out;
	unsigned int	ln;

	if (!str)
		return (0);
	ln = ft_strlen(*str);
	if (ln > size)
		return (free(*str), (void *)0);
	out = malloc((size + 1) * sizeof(char));
	if (!out)
		return (free(*str), (void *)0);
	out[0] = 0;
	ft_strcat(out, *str);
	free(*str);
	return (out);
}
