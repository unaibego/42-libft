/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubegona <ubegona@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:57:51 by ubegona           #+#    #+#             */
/*   Updated: 2022/09/02 16:16:06 by ubegona          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	resul;
	int minus;

	i = 0;
	resul = 0;
	minus = 1;
	if (str[0] == '-')
	{
		i = 1;
		minus = -1;
	}
	while (str[i])
	{
		resul = resul * 10 + str[i] - '0';
		i++;
	}
	return (resul * minus);
}
