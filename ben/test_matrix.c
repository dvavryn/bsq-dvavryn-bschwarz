#include <stdio.h>

int	ft_check_area(int size, char matrix[15][15], int k, int l)
{
	int i;
	int j;
	int check;

	i = 0;
	check = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (matrix[i + k][j + l] == 'o')
				check++;
			j++;
		}
		i++;
	}
	return (check == 0);
}

int	ft_search(int size, char matrix[15][15])
{
	int k;
	int l;
	int count;

	k = 0;
	count = 0;
	while (k <= 15 - size)
	{
		l = 0;
		while (l <= 15 - size)
		{
			if (ft_check_area(size, matrix, k, l))
				count++;
			l++;
		}
		k++;
	}
	printf("Found with size %dx%d: %d\n", size, size, count);
	return (count);
}

int	main(void)
{
	char	matrix[15][15] = {
		"......o........",
		".....o.........",
		".........o.....",
		".......o....oo.",
		"...............",
		"...............",
		".........o.....",
		"...............",
		"...............",
		"...............",
		"o...o..........",
		"o..o....o.....o",
		"...............",
		".............o.",
		"....o.........."
	};
	int	size;
	int	total_count;

	size = 1;
	total_count = 0;
	while (size <= 15)
	{
		total_count += ft_search(size, matrix);
		size++;
	}
	return (0);
}
