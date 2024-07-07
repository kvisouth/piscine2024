#include <stdio.h>

void print_grid(int	grid[4][4])
{
	static int count = 1;
	printf("Grid #%d:\n", count++);
	int i = 0;
	while (i < 4)
	{
		int j = 0;
		while (j < 4)
		{
			printf("%d ", grid[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	printf("\n");
}

/*
This function will check if the number is valid in the row and column
It will return 0 if the number is not valid
A valid number is a number that is not in the row or column
So there should be no same number in the row or column
Also known as Latin Square
*/
int	is_valid(int grid[4][4], int row, int col, int num)
{
	int i = 0;
	while (i < 4)
	{
		if (grid[row][i] == num || grid[i][col] == num)
			return 0;
		i++;
	}
	return 1;
}

/*
A Recursive function to fill the grid with numbers from 1 to 4
It will check if the number is valid in the row and column with the is_valid function
If the number is valid, it will fill the grid with the number and call itself with the next row and column
If the number is not valid, it will try the next number
If the row is 4, it will print the grid
*/
void fill_grid(int grid[4][4], int row, int col)
{
	if (row == 4)
	{
		print_grid(grid);
		return;
	}
	int num = 1;
	while (num <= 4)
	{
		if (is_valid(grid, row, col, num))
		{
			grid[row][col] = num;
			fill_grid(grid, row + (col + 1) / 4, (col + 1) % 4);
		}
		num++;
	}
	grid[row][col] = 0;
}

int main(void)
{
	int	grid[4][4];
	fill_grid(grid, 0, 0);
	return 0;
}
