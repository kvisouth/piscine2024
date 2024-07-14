/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-13 09:43:37 by kevisout          #+#    #+#             */
/*   Updated: 2024-07-13 09:43:37 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/rush.h"
#include "../inc/index.h"
#include "ft_get_next_line.h"
#include <stdint.h>

/*
If there is 0 argument (only executable) subject does not tell to write
any error messages..
If there is 1 argument : That's the value to convert.
If there is 2 arguments :
- First argument is the dictionary to use. (The name of the file to open)
- Second argument is the number to convert. (Has to be positive)
*/

void	ft_init_tab(t_nbr *nbr)
{
	int	i;

	i = 0;
	while (i < INDEX_MAX_NBR + 2)
	{
		nbr->tab[i] = 0;
		i++;
	}
}

int	ft_init_nbr(t_nbr *nbr, char *str)
{
	nbr->tab = 0;
	nbr->nbr = ft_atoa(str);
	if (!nbr->nbr)
		return (0);
	nbr->nbr_len = ft_strlen(nbr->nbr);
	if (nbr->nbr_len > 39)
		return (free(nbr->nbr), 0);
	nbr->tab = malloc(((INDEX_MAX_NBR + 2) * sizeof(char *)));
	if (!(nbr->tab))
		return (free(nbr->nbr), 0);
	ft_init_tab(nbr);
	nbr->tab_len = 0;
	nbr->nb_groups = nbr->nbr_len / GROUP_SIZE;
	nbr->rest = nbr->nbr_len % GROUP_SIZE;
	nbr->buffer.buffer = 0;
	nbr->buffer.free_space = 0;
	nbr->buffer.total_space = BUFFER_SIZE;
	return (1);
}

void	ft_free_nbr(t_nbr *nbr)
{
	int	i;

	if (nbr->tab)
	{
		i = 0;
		while (i < INDEX_MAX_NBR + 2)
		{
			free(nbr->tab[i]);
			i++;
		}
		free(nbr->tab);
	}
	if (nbr->buffer.total_space >= BUFFER_SIZE)
		free(nbr->buffer.buffer);
	free(nbr->nbr);
}

int	main(int ac, char **av)
{
	char	*dictname;
	char	*final_string;
	t_nbr	nbr;

	if (ac < 2 || ac > 3)
		return (ft_perror(ERRMSG, 1));
	if (ac == 2)
		dictname = DICTNAME;
	else
		dictname = av[ac -1];
	if (!ft_init_nbr(&nbr, av[ac - 1]))
		return (ft_perror(ERRMSG, 2));
	if (!ft_read_file(dictname, &nbr))
		return (ft_free_nbr(&nbr), 3);
	if (!main_loop(&nbr))
		return (ft_free_nbr(&nbr), ft_perror(ERRMSG, 3));
	ft_trim_trailling(nbr.buffer.buffer, ',');
	final_string = ft_trim_leading(nbr.buffer.buffer);
	if (!final_string)
		return (ft_free_nbr(&nbr), ft_perror(ERRMSG, 3));
	ft_putstr(final_string);
	ft_putstr("\n");
	free(final_string);
	ft_free_nbr(&nbr);
	return (0);
}
