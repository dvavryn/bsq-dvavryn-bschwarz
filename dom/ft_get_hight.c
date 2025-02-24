/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_hight.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:52:02 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/24 18:10:18 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int ft_get_hight(char *str)
{
	int	i;
	char *num;
	int res;

	i = ft_is_num(str);
	num = (char *)malloc(i * sizeof(char));
	printf("%s", num);
	ft_strncpy(num, str, i);
	res = ft_atoi(num);
	return res;
}