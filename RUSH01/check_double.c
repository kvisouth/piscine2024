/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sovincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 15:07:01 by sovincen          #+#    #+#             */
/*   Updated: 2024/07/06 15:31:39 by sovincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Check if the number added is not already placed in the column
int	check_double_col(int **grid, int row, int col)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (i != col)
		{
			if (grid[row][col] == grid[row][i])
				return (0);
		}
		i++;
	}
	return (1);
}

//Check if the number added is not already placed in the row
int	check_double_row(int **grid, int row, int col)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (i != row)
		{
			if (grid[row][col] == grid[i][col])
				return (0);
		}
		i++;
	}
	return (1);
}

int	check_double(int **grid, int row, int col)
{
	if (check_double_row(grid, row, col) == 1)
		if (check_double_col(grid, row, col) == 1)
			return (1);
	else
		return (0);
}
