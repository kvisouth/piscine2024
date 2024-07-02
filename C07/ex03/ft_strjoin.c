/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-02 12:38:18 by kevisout          #+#    #+#             */
/*   Updated: 2024-07-02 12:38:18 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

int	set_max_size(int size, char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
		i++;
	if (size >= i - 1)
		return (i);
	return (size);
}

int	get_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	(void)sep;
	i = 0;
	len = 0;
	size = set_max_size(size, strs);
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i ++;
	}
	len = len + (ft_strlen(sep) * (size - 1));
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;

	i = 0;
	str = NULL;
	str = malloc(get_len(size, strs, sep) + 1);
	if (!str)
		return (NULL);
	if (size == 0)
		return (str);
	size = set_max_size(size, strs);
	while (i < size)
	{
		str = ft_strcat(str, strs[i]);
		if (i < size - 1)
			str = ft_strcat(str, sep);
		i++;
	}
	i = ft_strlen(str);
	str[i] = '\0';
	return (str);
}

int main(int ac, char **av)
{
	if (ac < 3)
		return 0;
	int size = atoi(av[1]);
	char *sep = av[2];
	av++;
	av++;
	av++;
	char *str = ft_strjoin(size, av, sep);
	printf(">%s.\n", str);
	free(str);
}
