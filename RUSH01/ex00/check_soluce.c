/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_soluce.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sovincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:09:00 by sovincen          #+#    #+#             */
/*   Updated: 2024/07/07 17:51:55 by sovincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 Check if the value place is valid according to the argument of
 the left row

 1- Initialize the number of visible buldings(nb) to 1 (the minimum value)
 2- If the value in the first column (i) is highter than the next one (i+j),
 add 1 to the visible buildings value, set the value of i to the new highter 
 one (i+j)and repeat the process.
  - If the value is not highter, compare the same value with the next one
   in the row (j++).
 3- Check if the number of visible buildings is equal to the
  number expected in the args[[colup][coldown][rowleft][rowright]]. That
  means it's steal a valid solution so return 1.
  Else return 0.
 */
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
			i = i + j;
			j = 1;
		}
		else
			j++;
	}
	if (nb == args[8 + row])
		return (1);
	else
		return (0);
}

/*
 Check if the value placed is valid according to the argument of
 the right row

 1- Initialize the number of visible buldings(nb) to 1 (the minimum value)
 2- If the value in the last column (i) is highter than the previous one (i-j),
 add 1 to the visible buildings value, set the value of i to the new highter
 one (i-j)and repeat the process.
  - If the value is not highter, compare the same value with the previous one
   in the row (j++).
 3- Check if the number of visible buildings is equal to the
  number expected in the args[[colup][coldown][rowleft][rowright]]. That
  means it's steal a valid solution so return 1.
  Else return 0.

 */
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
			i = i - j;
			j = 1;
		}
		else
			j++;
	}
	if (nb == args[12 + row])
		return (1);
	else
		return (0);
}

/*
 Check if the value placed is valid according to the argumemt of
 the column up

 1- Initialize the number of visible buldings(nb) to 1 (the minimum value)
 2- If the value in the first row (i) is highter than the next one (i+j),
 add 1 to the visible buildings value, set the value of i to the new highter
 one (i+j) and repeat the process.
  - If the value is not highter, compare the same value with the next one
   in the column (j++).
 3- Check if the number of visible buildings is equal to the
  number expected in the args[[colup][coldown][rowleft][rowright]]. That
  means it's steal a valid solution so return 1.
  Else return 0.

 */
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
			i = i + j;
			j = 1;
		}
		else
			j++;
	}
	if (nb == args[col])
		return (1);
	else
		return (0);
}

/*
 Check if the value placed is valid according to the argument of 
 the column down

  1- Initialize the number of visible buldings(nb) to 1 (the minimum value)
 2- If the value in the last column (i) is highter than the previous one (i-j),
 add 1 to the visible buildings value, set the value of i to the new highter
 one (i-j)and repeat the process.
  - If the value is not highter, compare the same value with the previous one
   in the row (j++).
 3- Check if the number of visible buildings is equal to the
  number expected in the args[[colup][coldown][rowleft][rowright]]. That
  means it's steal a valid solution so return 1.
  Else return 0.

 */
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
			i = i - j;
			j = 1;
		}
		else
			j++;
	}
	if (nb == args[4 + col])
		return (1);
	else
		return (0);
}

/*
Check the validity of all the grid according to the arguments 

 1- Loop to check for all the row (0 to 3)
 2- Loop to check for all the column (0 to 3)
 3- Call the previous function to check if the value is valid for all side.
 If not, return 0 (the solution is not valid)
 4- Return 1 (the solution is valid) when all the check are done
*/
int	check_grid(int **grid, int *args)
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			if (check_soluce_coldown(grid, args, col) == 0)
				return (0);
			if (check_soluce_colup(grid, args, col) == 0)
				return (0);
			if (check_soluce_rowleft(grid, args, row) == 0)
				return (0);
			if (check_soluce_rowright(grid, args, row) == 0)
				return (0);
			col++;
		}
		row++;
	}
	return (1);
}
