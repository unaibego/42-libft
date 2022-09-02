/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubegona <ubegona@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:59:11 by ubegona           #+#    #+#             */
/*   Updated: 2022/08/30 12:35:15 by ubegona          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset(void	*s, int c, size_t	n)
{
	unsigned int	i;
	char			*str;
	char			u;

	str = (char *)s;
	u = c;
	i = 0;
	while (str[i] && i < n)
	{
		str[i] = u;
		i++;
	}
}
