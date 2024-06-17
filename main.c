void error_out(void);
char *parse(char out[6][6], char *str);
void print_grid(char grid[6][6]);
int solve(char grid[6][6]);

int main(int argc, char *argv[])
{
	char input[6][6];

	if (argc == 2)
	{
		parse(input, argv[1]);
		solve(input);
		print_grid(input);
	}
	else
		error_out();
	return (0);
}
