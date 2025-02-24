/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 13:10:35 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/24 18:07:11 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

typedef struct map_description
{
	int height;
	char empty;
	char obstacle;
	char full;
}	map_des;

#define BUF_MAX 1024

int ft_line_len(char *str);
void ft_print_(char *first_line, char *buffer, int map, int bytes_read);


int main (int argc, char **argv)
{
	// CHECK args - if 1 -> usage || if 2 -> open filename!
	if (argc == 1)
	{
		ft_putstr("USAGE: ./bsq \"FILENAME\"");
		return (-1);
	}
	if (argc != 2)
		return (-1);
	
	char *filename = argv[1];
	
	// OPEN file
	int map = 0;
	map = open(filename, O_RDONLY);
	if (map == -1)
		ft_putstr("Map couldnt be opened!\n"); 

	// CREATE buffer with siez BUF_MAX: 1kB rn
	char buffer[BUF_MAX];
	
	// READ Map from file
	int bytes_read;
	bytes_read = read(map, buffer, sizeof(buffer) - 1);

	// EXTRACT first line of buffer!
	char *first_line;
	first_line = (char *)malloc(ft_first_line_len(buffer)*sizeof(char));

	ft_strncpy(first_line, buffer, ft_first_line_len(buffer));

	//map_des one;
	//one.height = ??;
	int a = ft_get_hight(first_line);
	printf("\nHEIGHT: %i\n", a);
	
	ft_putstr(first_line);

	// CLOSE file
	close(map);
}
