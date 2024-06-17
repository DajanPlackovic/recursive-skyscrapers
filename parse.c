char *parse(char out[6][6], char *str)
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		out[0][i + 1] = *str;
		str++;
		i++;
	}

	i = 0;
	while (i < 4)
	{
		out[5][i + 1] = *str;
		str++;
		i++;
	}

	i = 0;
	while (i < 4)
	{
		out[i + 1][0] = *str;
		str++;
		i++;
	}

	i = 0;
	while (i < 4)
	{
		out[i + 1][5] = *str;
		str++;
		i++;
	}

	i = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			out[i][j] = '0';
			j++;
		}
		i++;
	}
	out[0][0] = 'X';
	out[5][5] = 'X';
	out[0][5] = 'X';
	out[5][0] = 'X';
}
