/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_group.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-14 11:28:09 by kevisout          #+#    #+#             */
/*   Updated: 2024-07-14 11:28:09 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/rush.h"
#include "../inc/index.h"

int	ft_group_sub0(t_nbr *nbr, int start, int len, int end)
{
	if (len > 1 && nbr->nbr[start - 1] == '0'
		&& nbr->nbr[start] != '0')
	{
		if (end == nbr->nbr_len - 1)
		{
			if (!ft_fill_buffer("and", &nbr->buffer, 0b10))
				return (0);
		}
		else
		{
			if (!ft_fill_buffer(",", &nbr->buffer, 0b00))
				return (0);
		}
	}
	return (1);
}

int	ft_group_sub1(t_nbr *nbr, int start, int *digit_written)
{
	if (nbr->nbr[start] != '0')
	{
		if (nbr->nbr[start] != '1')
		{
			if (!ft_write_nb(nbr, 18 + nbr->nbr[start] - '0'))
				return (0);
			*digit_written |= 0b010;
		}
	}
	return (1);
}

int	ft_group_sub2_1(t_nbr *nbr, int len, int start, int *digit_written)
{
	if (len > 0)
	{
		if (nbr->nbr[start - 1] != '0')
		{
			if (!ft_fill_buffer("-", &nbr->buffer, 0b00))
				return (0);
		}
		else if (nbr->nbr[start - 1] == '0')
		{
			if (!ft_fill_buffer("and", &nbr->buffer, 0b11))
				return (0);
		}
		if (!ft_fill_buffer(nbr->tab[nbr->nbr[start] - '0'],
				&nbr->buffer, 0b00))
			return (0);
	}
	else
		if (!ft_write_nb(nbr, nbr->nbr[start] - '0'))
			return (0);
	*digit_written |= 0b0001;
	return (1);
}

int	ft_group_sub2(t_nbr *nbr, int len, int start, int *digit_written)
{
	if (len > 0 && nbr->nbr[start - 1] == '1')
	{
		ft_write_nb(nbr, 10 + nbr->nbr[start] - '0');
		*digit_written |= 0b011;
	}
	else if (len == 0 && (nbr->nb_groups == 0 && nbr->rest > 0))
	{
		ft_write_nb(nbr, nbr->nbr[start] - '0');
		*digit_written |= 0b001;
	}
	else if (nbr->nbr[start] != '0')
		if (!ft_group_sub2_1(nbr, len, start, digit_written))
			return (0);
	return (1);
}

int	ft_group(t_nbr *nbr, int start, int end, int *digit_written)
{
	int	i;
	int	len;

	i = 0;
	len = end - start;
	while (i <= len)
	{
		if (len - i == 2 && nbr->nbr[start + i] != '0')
		{
			ft_write_nb(nbr, nbr->nbr[start + i] - '0');
			ft_fill_buffer(nbr->tab[HUNDRED], &nbr->buffer, 0b10);
			*digit_written |= 0b100;
		}
		else if (len - i == 1)
		{
			if (!ft_group_sub0(nbr, start + i, len, end)
				|| !ft_group_sub1(nbr, start + i, digit_written))
				return (0);
		}
		else if (len - i == 0)
			if (!ft_group_sub2(nbr, len, start + i, digit_written))
				return (0);
		i++;
	}
	return (1);
}
