/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-13 12:05:34 by kevisout          #+#    #+#             */
/*   Updated: 2024-07-13 12:05:34 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

/*
Returns 0 if the number is not "atoi-like" and does not accept '-' symbols.
Otherwise, returns the length of the number.
*/
int	get_len_of_number(char *str)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		i++;
		len++;
	}
	return (len);
}

/*
Works like atoi but his goal is to trim spaces and '+' symbol before
the number, to return that number in a string.
*/
char	*ft_atoa(char *str)
{
	char	*clean_nbr;
	int		len;
	int		i;

	clean_nbr = NULL;
	len = get_len_of_number(str);
	if (!len)
		return (NULL);
	clean_nbr = malloc((len + 1) * sizeof(char));
	if (!clean_nbr)
		return (NULL);
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+')
		i++;
	while (str[i] == '0')
		i++;
	len = 0;
	while (str[i] >= '0' && str[i] <= '9')
		clean_nbr[len++] = str[i++];
	if (len == 0)
		clean_nbr[len++] = '0';
	clean_nbr[len] = '\0';
	return (clean_nbr);
}
