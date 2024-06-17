#include <unistd.h>

void print_grid(char grid[6][6])
{
	int i;
	int j;

	i = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			write(1, &grid[i][j], 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
