/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-06 09:01:41 by kevisout          #+#    #+#             */
/*   Updated: 2024-07-06 09:01:41 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

/*
Will completely free **grid and *grid at the END of the program
*/
void	free_grid(int **grid)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

/*
Will completely free **grid and *grid on malloc error
*/
void	free_grid_on_error(int **grid)
{
	int	i;

	i = 0;
	while (grid[i] != NULL)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

/*
Will initialize a int **grid (Puzzle playground)
With the size of 4x4 (ints)

1 - Allocates 4 "lines" in that grid with the size of *int
2 - For each "lines" allocates 4 "columns" with the size of int
*/
int	**init_tab(void)
{
	int	**grid;
	int	i;
	int	y;

	grid = malloc(4 * sizeof(int *));
	if (!grid)
		free(grid);
	i = 0;
	while (i < 4)
	{
		y = 0;
		grid[i] = malloc(4 * sizeof(int));
		if (!grid[i])
			free_grid_on_error(grid);
		while (y < 4)
		{
			grid[i][y] = '0';
			y++;
		}
		i++;
	}
	return (grid);
}

/*
Allocate with malloc() an array of 16 integers.
Fill the array with numbers in char *args (argv)

1 - Skip spaces
2 - On a number, fill tab[i] with current number from ascii to int.
3 - Skip the number because it has been already used to fill tab[i]
4 - Jump on next tab[i] (i++)
5 - Loops until last number in char *args
*/
int	*init_args(char *args)
{
	int	*tab;
	int	i;

	i = 0;
	tab = malloc(16 * sizeof(int));
	if (tab == NULL)
		free(tab);
	while (args)
	{
		while (*args == ' ')
			args++;
		if (*args >= '0' && *args <= '9')
		{
			tab[i] = *args - 48;
			while (*args >= '0' && *args <= '9')
				args++;
			i++;
		}
		if (i == 16)
			break ;
	}
	return (tab);
}
