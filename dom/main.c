/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 13:10:35 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/24 18:23:38 by dvavryn          ###   ########.fr       */
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
		ft_putstr("Error");
		return (1);
	}

	close (fd);
}
