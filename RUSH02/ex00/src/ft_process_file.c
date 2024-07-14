/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-13 15:39:12 by kevisout          #+#    #+#             */
/*   Updated: 2024-07-13 15:39:12 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "../inc/index.h"
#include "ft_get_next_line.h"
#include "rush.h"
#include "index.h"

char	*ft_trim_leading(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str);
	while (str[i] == ' ')
		i++;
	return (ft_strdup(str + i));
}

void	ft_trim_trailling(char *str, char c)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (str[i] == c)
		i--;
	str[i + 1] = 0;
}

int	ft_extract_value(char *str, t_nbr *nbr, int dot)
{
	char	*nb;
	int		index;

	nb = ft_atoa(str);
	if (!nb)
		return (0);
	index = ft_get_index(nb);
	if (index == -1)
		return (free(nb), 1);
	if (!nbr->tab[index])
	{
		nbr->tab[index] = ft_trim_leading(str + dot + 1);
		if (!nbr->tab[index])
			return (free(nb), 0);
		ft_trim_trailling(nbr->tab[index], ' ');
		nbr->tab_len++;
	}
	free(nb);
	return (1);
}

int	ft_read_file_sub(t_nbr *nbr, int fd, char **lines)
{
	int		cut;
	char	*line;

	line = ft_get_next_line(fd, lines);
	if (!lines)
		return (close(fd), ft_perror(ERRMSG, 0));
	cut = ft_strchr(line, ':');
	if (cut != -1)
	{
		if (!ft_extract_value(line, nbr, cut))
			return (free(line), close(fd),
				ft_perror(ERRMSG, 0));
	}
	free(line);
	return (1);
}

int	ft_read_file(char *filename, t_nbr *nbr)
{
	char	*lines;
	int		fd;
	int		tmp;

	fd = open(filename, O_RDONLY);
	lines = 0;
	if (fd == -1)
		return (0);
	while (nbr->tab_len <= INDEX_MAX_NBR)
	{
		tmp = ft_read_file_sub(nbr, fd, &lines);
		if (tmp < 1)
			return (free(lines), 0);
	}
	if (nbr->tab_len <= INDEX_MAX_NBR)
		return (free(lines), close(fd), ft_perror(ERRDICT, 0));
	free(lines);
	close(fd);
	return (1);
}
