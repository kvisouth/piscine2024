/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-14 11:25:15 by kevisout          #+#    #+#             */
/*   Updated: 2024-07-14 11:25:15 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_get_next_line.h"
#include "rush.h"

static char	*ft_strndup_g(char *str, int ln)
{
	int		i;
	int		len;
	char	*out;

	if (!str)
		return (0);
	len = ft_strlen(str);
	if (ln > len)
		ln = len;
	else if (ln < 0)
		ln = 0;
	i = 0;
	out = malloc((ln + 1) * sizeof(char));
	if (!out)
		return (out);
	while (i < ln)
	{
		out[i] = str[i];
		i++;
	}
	out[i] = 0;
	return (out);
}

static char	*ft_strncut_sub(char **str)
{
	char	*out;
	int		len;

	len = ft_strlen(*str);
	out = ft_strndup_g(*str, len);
	if (!out)
		return (0);
	free(*str);
	*str = (char *)0;
	return (out);
}

static char	*ft_strncut(char **str, int ln)
{
	int		len;
	char	*out;
	char	*tmp;

	if (!str || !(*str))
		return (0);
	len = ft_strlen(*str);
	if (ln > len)
		ln = len;
	if (ln < 0)
		return (ft_strncut_sub(str));
	out = ft_strndup_g(*str, ln);
	if (!out)
		return (0);
	tmp = ft_strndup_g((*str) + ln + 1, len - ln);
	if (!tmp)
		return (free(out), (char *)0);
	free(*str);
	if (tmp[0])
		*str = tmp;
	else
		*str = (free(tmp), (char *)0);
	return (out);
}

static int	ft_get_next_sub(t_data *data, int fd, char *buffer, char **lines)
{
	while (data->bread > 0 && data->tmp == -1)
	{
		data->bread = read(fd, buffer, BUFFER_SIZE);
		if (data->bread < 0)
			return (0);
		buffer[data->bread] = 0;
		if (data->bread > data->free_space)
		{
			while (data->bread > data->free_space)
			{
				data->free_space += data->total_size;
				data->total_size *= 2;
			}
			*lines = ft_realloc(lines, data->total_size);
			if (!(*lines))
				return (0);
		}
		ft_strcat(*lines, buffer);
		data->free_space -= data->bread;
		data->tmp = ft_check_endl(*lines);
	}
	return (1);
}

char	*ft_get_next_line(int fd, char **lines)
{
	char	*buffer;
	t_data	data;

	data.tmp = ft_check_endl(*lines);
	if (data.tmp != -1)
		return (ft_strncut(lines, data.tmp));
	data.bread = 1;
	data.free_space = 0;
	data.total_size = BUFFER_SIZE;
	buffer = malloc((data.total_size + 1) * sizeof(char));
	if (!buffer)
		return (0);
	if (!ft_get_next_sub(&data, fd, buffer, lines))
		return (free(buffer), (char *)0);
	free(buffer);
	return (ft_strncut(lines, data.tmp));
}
