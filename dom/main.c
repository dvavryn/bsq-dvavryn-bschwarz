/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 13:10:35 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/24 18:52:35 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

map_des write_map_des(int fd);


int main (int argc, char **argv)
{
	int fd;

	if (argc != 2)
		return 1;

	fd = open(argv[1], O_RDONLY);
	if (!fd)
	{
		return (1);
	}

	map_des map;

	close (fd);
}


