void set_checker(int checker[4])
{
	int i;

	i = 0;
	while (i < 4)
	{
		checker[i] = 0;
		i++;
	}
}

void get_col(char grid[6][6], int col, char col_container[6])
{
	int i;

	i = 0;
	while (i < 6)
	{
		col_container[i] = grid[i][col];
		i++;
	}
}

int check_view(char row[6])
{
	int maxb;
	int maxe;
	int countb;
	int counte;
	int i;

	maxb = 0;
	maxe = 0;
	countb = 0;
	counte = 0;
	i = 0;
	while (i < 4)
	{
		if (row[i + 1] > maxb)
		{
			maxb = row[i + 1];
			countb++;
		}

		if (row[4 - i] > maxe)
		{
			maxe = row[4 - i];
			counte++;
		}
		i++;
	}
	if (countb == row[0] - '0' && counte == row[5] - '0')
		return (1);
	return (0);
}

int check_col(char grid[6][6], int col, int checker[4])
{
	int i;
	int this;
	char col_container[6];

	set_checker(checker);
	i = 1;
	while (i < 5)
	{
		if (grid[i][col] != '0')
		{
			this = grid[i][col] - '1';
			if (checker[this])
				return (0);
			checker[this] = 1;
		}
		i++;
	}
	if (grid[4][col] != '0')
	{
		get_col(grid, col, col_container);
		if (!check_view(col_container))
			return (0);
	}
	return (1);
}

int check_row(char grid[6][6], int row, int checker[4])
{
	int i;
	int this;

	set_checker(checker);
	i = 1;
	while (i < 5)
	{
		if (grid[row][i] != '0')
		{
			this = grid[row][i] - '1';
			if (checker[this])
				return (0);
			checker[this] = 1;
		}
		i++;
	}
	if (grid[row][4] != '0' && !check_view(grid[row]))
		return (0);
	return (1);
}
