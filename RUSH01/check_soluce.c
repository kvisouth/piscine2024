/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_soluce.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sovincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:09:00 by sovincen          #+#    #+#             */
/*   Updated: 2024/07/06 14:55:24 by sovincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_soluce_rowleft(int **grid, int *args, int row)
{
	int	i;
	int	j;
	int	nb;

	i = 0;
	j = 1;
	nb = 1;
	while (i < 3 && (i + j) < 4)
	{
		if (grid[row][i] < grid[row][i + j])
		{
			nb++;
			i++;
			j = 1;
		}
		else
			j++;
	}
	if (nb <= args[8 + row])
		return (1);
	else
		return (0);
}

int	check_soluce_rowright(int **grid, int *args, int row)
{
	int	i;
	int	j;
	int	nb;

	i = 3;
	j = 1;
	nb = 1;
	while (i > 0 && (i - j) >= 0)
	{
		if (grid[row][i] < grid[row][i - j])
		{
			nb++;
			i--;
			j = 1;
		}
		else
			j++;
	}
	if (nb <= args[12 + row])
		return (1);
	else
		return (0);
}

int	check_soluce_colup(int **grid, int *args, int col)
{
	int	i;
	int	j;
	int	nb;

	i = 0;
	j = 1;
	nb = 1;
	while (i < 3 && (i + j) < 4)
	{
		if (grid[i][col] < grid[i + j][col])
		{
			nb++;
			i++;
			j = 1;
		}
		else
			j++;
	}
	if (nb <= args[col])
		return (1);
	else
		return (0);
}

int	check_soluce_coldown(int **grid, int *args, int col)
{
	int	i;
	int	j;
	int	nb;

	i = 3;
	j = 1;
	nb = 1;
	while (i > 0 && (i - j) >= 0)
	{
		if (grid[i][col] < grid[i - j][col])
		{
			nb++;
			i--;
			j = 1;
		}
		else
			j++;
	}
	if (nb <= args[4 + col])
		return (1);
	else
		return (0);
}
