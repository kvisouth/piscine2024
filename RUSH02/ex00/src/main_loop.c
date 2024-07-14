/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_loop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-14 19:08:53 by kevisout          #+#    #+#             */
/*   Updated: 2024-07-14 19:08:53 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

static int	main_loop_sub1(t_nbr *nbr, int *i)
{
	int	tmp;
	int	char_print;

	char_print = 0;
	if (!ft_group(nbr, *i, *i + nbr->rest - 1, &char_print))
		return (0);
	tmp = nbr->nb_groups + (nbr->rest > 0);
	if (tmp > 1)
		if (!ft_fill_buffer(nbr->tab[27 + tmp], &nbr->buffer, 0b10))
			return (0);
	if (tmp > 1)
		if (!ft_fill_buffer(",", &nbr->buffer, 0b00))
			return (0);
	*i += nbr->rest;
	nbr->rest = 0;
	return (1);
}

static int	main_loop_sub2(t_nbr *nbr, int *i)
{
	int	tmp;
	int	char_print;

	char_print = 0;
	if (!ft_group(nbr, *i, *i + GROUP_SIZE - 1, &char_print))
		return (0);
	tmp = nbr->nb_groups - *i / GROUP_SIZE;
	*i += GROUP_SIZE;
	if (tmp > 1 && (char_print & 0b111))
	{
		if (!ft_fill_buffer(nbr->tab[27 + tmp], &nbr->buffer, 0b10)
			|| !ft_fill_buffer(",", &nbr->buffer, 0b00))
			return (0);
	}
	return (1);
}

int	main_loop(t_nbr *nbr)
{
	int		i;

	i = 0;
	while (i < nbr->nbr_len)
	{
		if (nbr->rest > 0)
		{
			if (!main_loop_sub1(nbr, &i))
				return (0);
		}
		else
		{
			if (!main_loop_sub2(nbr, &i))
				return (0);
		}
	}
	return (1);
}
