/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 13:10:35 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/25 11:37:13 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"




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

	map_des mission;
	mission = ft_write_map();
	close (fd);
}

/*
typedef struct values
{
	int heigth;
	char empty;
	char obstacle;
	char full;
}	map_des;
*/

map_des ft_write_map(char *str)
{
	map_des ret;
	char	*h;

	h = strncpy(str);

	ret.heigth = ft_atoi(h);
	ret.empty = ft_tto_lastchar(str);
	ret.obstacle = ft_sto_lastchar(str);
	ret.full = ft_lastchar(str);
	return (ret);
}