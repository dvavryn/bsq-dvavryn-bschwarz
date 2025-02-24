/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:00:02 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/24 18:09:22 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_atoi(char *str)
{
	int	i;
	int	fin;
	int	neg;

	i = 0;
	fin = 0;
	neg = 1;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			neg = neg * -1;
		i++;
	}
	while (47 < str[i] && str[i] < 58)
	{
		fin = fin * 10;
		fin = fin + (str[i] - '0');
		i++;
	}
	fin = fin * neg;
	return (fin);
}
