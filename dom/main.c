/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 13:10:35 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/24 17:36:50 by dvavryn          ###   ########.fr       */
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
	if (argc == 1)
		ft_putstr("USAGE: ./bsq \"FILENAME\"");
	if (argc != 2)
		return (-1);
	char *filename = argv[1];
	int map = 0;
	map = open(filename, O_RDONLY);
	if (map == -1)
		ft_putstr("Map couldnt be opened!\n");
	//ft_putstr("Map opened sucessfully!\n");

	char buffer[BUF_MAX];
	int bytes_read;
	bytes_read = read(map, buffer, sizeof(buffer) - 1);


	char *first_line;
	first_line = (char *)malloc(ft_first_line_len(buffer)*sizeof(char));
	ft_strncpy(first_line, buffer, ft_first_line_len(buffer));



	ft_print_(first_line, buffer, map, bytes_read);

	close(map);
	//ft_putstr("Map closed!\n");
}

void ft_print_(char *first_line, char *buffer, int map, int bytes_read)
{
	ft_putstr("in map: ");
	ft_putnbr(map);
	ft_putstr("\n");
	ft_putnbr(bytes_read);
	ft_putstr(" bytes read!\nbuffer:\n");
	ft_putstr(buffer);
	ft_putstr("\n");
	ft_putstr("first line len: ");
	ft_putnbr(ft_line_len(buffer));
	ft_putstr("\n");
	ft_putstr("first line: ");
	ft_putstr(first_line);
	ft_putstr("\n");
}