/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:16:04 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/25 11:36:00 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

// BUFF_MAX -> 1024
# define BUFF_MAX 1024

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


/*	typedef struct*/
typedef struct values
{
	int heigth;
	char empty;
	char obstacle;
	char full;
}	map_des;
/*	typedef struct end*/

/*	function prototypes */
int		ft_atoi(char *str);
int 	ft_get_hight(char *str);
int		ft_is_num(char *str);
int		ft_line_len(char *str);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	ft_lastchar(char *str);
char	ft_sto_lastchar(char *str);
char	ft_tto_lastchar(char *str);


/*	funtion prototypes end*/
#endif