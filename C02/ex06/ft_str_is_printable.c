/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-26 11:24:11 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-26 11:24:11 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
J'ai eu KO parceque j'ai mis 33 au lieu de 32
(Space est printable enfait)
*/
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return (1);
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}
