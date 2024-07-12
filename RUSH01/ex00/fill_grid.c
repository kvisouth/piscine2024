/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-07 12:55:26 by kevisout          #+#    #+#             */
/*   Updated: 2024-07-07 12:55:26 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_grid(int **grid, int *args);
void	ft_putchar(char c);

/*
This function will simply write using write() on the terminal, the int** in
the parameters (the grid)
*/
void	write_grid(int **grid)
{
	int	i;
	int	y;

	i = 0;
	while (i < 4)
	{
		y = 0;
		while (y < 4)
		{
			ft_putchar(grid[i][y] + 48);
			if (y != 3)
				ft_putchar(' ');
			y++;
		}
		ft_putchar('\n');
		i++;
	}
}

/*
This function will check if 'num' is on the same columm OR line.
(it is called a Latin Square)
Will return 0 if it is (Invalid)
Will return 1 if not (Valid)
*/
int	is_valid(int **grid, int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == num || grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

/*
This function was created because of norm issues.
It will avoid writing Error\n 16 times on the terminal by counting the
numbers of recursion called in fill_grid.
Once cpt reach 16, will print Error.
Then cpt will be higher than 16 and will be reset.
*/
void	write_invalid_grid(int total, int res)
{
	static int	cpt;

	if (cpt >= 16)
		cpt = 0;
	cpt++;
	if (total == 576 && res == 0 && cpt == 16)
		write(1, "Error\n", 6);
}

/*
This function uses static variables.
A static variable keeps track of the values it conains through
the whole program.
Because this function is recursive, we want to memorize the value
of 'res' and 'total'.

The first condition checks if row == 4 : Meaning the grid is filled.
And also checks for res, which is equal to 1 if a valid grid is found.

num is initialized to 1, at every recursion, it's the number that will
be placed in the grid.

The while loop will first check if the 'num' variable is suitable in the grid
by asking 'is_valid' and it's return value.

If num is valid, it will put the num in the current case of the grid.
Then call the recursion with :
row + (col + 1) / 4       and        (col + 1) % 4
--> Because we want to determine what is the next cell in the grid to fill.

In (col + 1) % 4
(col + 1) Will just make us jump to the next column
% 4 Will just make sure that if the actual column is the last one (3) the next
one HAVE to be 0.

In row + (col + 1) / 4
col + 1 Will also jump to the next column
/ 4 Will determine if we have to jump to the next line. If col + 1 = 4, the
result of (col + 1) / 4 will be 1, it will then add 1 to row, allowing us
to jump on the next line. If col + 1 != 4, the result of (col + 1) / 4 will
be 0, so we are adding 0 to row, making us staying on the same line.

Then, num will take a higher value, and the recursion continues.

The `grid[row][col] = 0;` is used to reset the grid in case the grid is not
valid.
*/
int	fill_grid(int **grid, int *args, int row, int col)
{
	static int	res;
	static int	total;
	int			num;

	if (row == 4 && res != 1)
	{
		total++;
		if (check_grid(grid, args) == 1)
			return (write_grid(grid), res = 1, 1);
		return (0);
	}
	num = 1;
	res = 0;
	while (num <= 4 && res != 1)
	{
		if (is_valid(grid, row, col, num))
		{
			grid[row][col] = num;
			fill_grid(grid, args, row + (col + 1) / 4, (col + 1) % 4);
		}
		num++;
	}
	grid[row][col] = 0;
	write_invalid_grid(total, res);
	return (0);
}
