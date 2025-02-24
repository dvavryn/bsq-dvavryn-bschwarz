#include <stdio.h>

int	ft_search(int size, char matrix[15][15])
{
	int i;
	int j;
	int k = 0;
	int l;
	int count = 0;
	int check;

	while (k <= 15 - size)
	{
		l = 0;
		while (l <= 15 - size)
		{
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
			if (check == 0)
				count++;
			l++;
		}
		k++;
	}
	printf("Found with size %dx%d: %d\n", size, size, count);
	return (0);
}

int	main()
{
	char	matrix[15][15] = {
	{"......o........"},
	{".....o........."},
	{".........o....."},
	{".......o....oo."},
	{"..............."},
	{"..............."},
	{".........o....."},
	{"..............."},
	{"..............."},
	{"..............."},
	{"o...o.........."},
	{"o..o....o.....o"},
	{"..............."},
	{".............o."},
	{"....o.........."},
	};
	int count = 0;
	int size = 1;
	
	while (size <= 15)
	{
		count += ft_search(size, matrix);
		size++;
	}
/* 	printf("%d\n", count);
 */	return (0);
}
