/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:16:04 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/24 16:04:28 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

//	open
# include <fcntl.h>
//	read, close, write
# include <unistd.h>
//	exit, malloc, free
# include <stdlib.h>

/*	ILLEGAL!!!! */
//	printf
# include <stdio.h>
/*	ILLEGAL!!!! */


/*	function prototypes */
//	ft_atoi.c
int	ft_atoi(const char *str);


/*	funtion prototypes end*/
#endif