/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_grid.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sovincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 11:50:32 by sovincen          #+#    #+#             */
/*   Updated: 2024/07/06 14:58:57 by sovincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 Check if the value of the column allows a solution
 */
int	check_valid_grid_col(int *array)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (array[i] == array[i + 4] && array[i] != 2)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
 * Check if the value of the row allows a solution
 */
int	check_valid_grid_row(int *array)
{
	int	i;

	i = 8;
	while (i < 12)
	{
		if (array[i] == array[i + 4] && array[i] != 2)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
