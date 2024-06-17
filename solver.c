int check_col(char grid[6][6], int col, int checker[4]);
int check_row(char grid[6][6], int row, int checker[4]);
void print_grid(char grid[6][6]);

int recursive_solve(char grid[6][6], int row, int column, int checker[4])
{
	char i;

	while (grid[row][column] != '0')
	{
		column++;
		if (column == 5)
		{
			row++;
			column = 1;
		}
		if (row == 5)
			return (1);
	}

	i = '1';
	while (i <= '4')
	{
		grid[row][column] = i;
		if (check_col(grid, column, checker) && check_row(grid, row, checker) && recursive_solve(grid, row, column, checker))
			return (1);
		i++;
	}
	// print_grid(grid);
	grid[row][column] = '0';
	return (0);
}

int solve(char grid[6][6])
{
	int checker[4];

	return recursive_solve(grid, 1, 1, checker);
}
