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
