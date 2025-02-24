/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 13:10:35 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/24 15:39:33 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

typedef struct
{
	int height;
	char empty;
	char obstacle;
	char full;
}	map_des;

#define BUF_MAX 1024

int ft_line_len(char *str);


int main (int argc, char **argv)
{
	if (argc == 1)
		printf("USAGE: ./bsq \"FILENAME\"");
	if (argc != 2)
		return (-1);
	char *filename = argv[1];
	int map = 0;
	map = open(filename, O_RDONLY);
	if (map == -1)
		printf("Map couldnt be opened!\n");
	printf("Map opened sucessfully!\n");

	char buffer[BUF_MAX];
	int bytes_read;
	bytes_read = read(map, buffer, sizeof(buffer) - 1);

	printf("in map: %i, %i bytes read!\nbuffer:\n%s\n", map, bytes_read, buffer);
	printf("first line len: %i", ft_line_len(buffer));


	close(map);
	printf("Map closed!\n");
}

int ft_line_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}