char *parse(char out[6][6], char *str)
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		if (*str >= '1' && *str <= '9')
		{
			out[0][i + 1] = *str;
			i++;
		}
		str++;
	}

	i = 0;
	while (i < 4)
	{
		if (*str >= '1' && *str <= '9')
		{
			out[5][i + 1] = *str;
			i++;
		}
		str++;
	}

	i = 0;
	while (i < 4)
	{
		if (*str >= '1' && *str <= '9')
		{
			out[i + 1][0] = *str;
			i++;
		}
		str++;
	}

	i = 0;
	while (i < 4)
	{
		if (*str >= '1' && *str <= '9')
		{
			out[i + 1][5] = *str;
			i++;
		}
		str++;
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
