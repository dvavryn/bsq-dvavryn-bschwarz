/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 13:10:35 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/24 14:57:54 by dvavryn          ###   ########.fr       */
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

int main (void)
{
	char *filename = "hello.txt";
	int map = 0;
	map = open(filename, O_RDONLY);
	if (map == -1)
		printf("Map couldnt be opened!\n");
	printf("Map opened sucessfully!\n");

	char description[BUF_MAX];
	int bytes_read;
	bytes_read = (map, description, BUF_MAX - 1);

	printf("%i bytes read!\ndescription:\n%s\n", bytes_read, description);


	close(map);
	printf("Map closed!\n");
}


