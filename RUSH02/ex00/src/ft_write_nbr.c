/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-13 15:38:59 by kevisout          #+#    #+#             */
/*   Updated: 2024-07-13 15:38:59 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/rush.h"
#include "../inc/index.h"
#include "ft_get_next_line.h"

int	ft_write_nb(t_nbr *nbr, int index)
{
	return (ft_fill_buffer(nbr->tab[index], &nbr->buffer, 0b10));
}

int	ft_fill_buffer(char *str, t_buffer *buffer, int raw)
{
	int	len;

	len = ft_strlen(str) + 2;
	if (len > buffer->free_space)
	{
		while (len > buffer->free_space)
		{
			buffer->free_space += buffer->total_space;
			buffer->total_space *= 2;
		}
		buffer->buffer = ft_realloc(&buffer->buffer, buffer->total_space);
		if (!buffer->buffer)
			return (0);
	}
	if (raw & 0b10)
		ft_strcat(buffer->buffer, " ");
	ft_strcat(buffer->buffer, str);
	if (raw & 0b01)
		ft_strcat(buffer->buffer, " ");
	return (1);
}
