/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 22:22:47 by ubuntu            #+#    #+#             */
/*   Updated: 2024/07/12 23:09:13 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
This function will return 1 if the character 'c' is a separator, present in the
string 'sep', and 0 otherwise.
*/
int	is_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

/*
This function will count the number of words present in the string 'str'.
Each words are separated by one of the characters in 'sep'.
1 - Skip the separators using 'is_sep'
2 - If current char is not a sep, increment the count
3 - Skip the word using '!is_sep'
*/
int	count_words(char *str, char *sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (is_sep(str[i], sep) && str[i])
			i++;
		if (!is_sep(str[i], sep) && str[i])
			count++;
		while (!is_sep(str[i], sep) && str[i])
			i++;
	}
	return (count);
}

/*
This function will act like strdup, but from the beginning of the string 'str'
to the next separator or the end of the string (if it's the last word).
*/
char	*ft_dup(char *str, char *sep)
{
	int		i;
	char	*dup;
	int		len;

	len = 0;
	while (!is_sep(str[len], sep) && str[len])
		len++;
	dup = malloc((len + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	i = 0;
	while (str[i] && !is_sep(str[i], sep))
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*
This function will split the string 'str' into an array of strings, each word
being separated by one of the characters in 'charset'.
1 - Allocate memory for the array of strings
2 - Skip the separators using 'is_sep'
3 - If current char is not a sep, duplicate the word using 'ft_dup'
4 - Skip the word using '!is_sep'
5 - Repeat until the end of the string
6 - Add a NULL pointer at the end of the array
*/
char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**tab;

	i = 0;
	tab = malloc((count_words(str, charset) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	while (*str)
	{
		while (is_sep(*str, charset) && *str)
			str++;
		if (!is_sep(*str, charset) && *str)
		{
			tab[i] = ft_dup(str, charset);
			if (!tab[i])
				return (NULL);
			i++;
		}
		while (!is_sep(*str, charset) && *str)
			str++;
	}
	tab[i] = NULL;
	return (tab);
}

// #include <stdio.h>
// int main(int ac, char **av)
// {
// 	char **tab;
// 	int i;

// 	if (ac == 3)
// 	{
// 		tab = ft_split(av[1], av[2]);
// 		if (!tab)
// 			return (1);
// 		i = 0;
// 		while (tab[i])
// 		{
// 			printf("%s\n", tab[i]);
// 			i++;
// 		}
// 	}
// 	return (0);
// }