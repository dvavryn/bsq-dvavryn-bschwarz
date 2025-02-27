/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_last.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:17:56 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/25 11:23:49 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	ft_lastchar(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i - 1);
}

char	ft_sto_lastchar(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i - 2);
}

char	ft_tto_lastchar(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i - 3);
}