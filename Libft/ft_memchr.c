/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubegona <ubegona@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:50:13 by ubegona           #+#    #+#             */
/*   Updated: 2022/09/01 17:29:43 by ubegona          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	char			*p;

	i = 0;
	while (((char *)s)[i] && ((char *)s)[i] != c && i + 1 < n)
		i++;
	p = &((char *)s)[i];
	if (((char *)s)[i] == c)
		return (p);
	else
		return ("(null)");

}
