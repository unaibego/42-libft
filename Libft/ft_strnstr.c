/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubegona <ubegona@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:31:00 by ubegona           #+#    #+#             */
/*   Updated: 2022/09/02 15:53:57 by ubegona          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*p;

	i = 0;
	while (((char *)haystack)[i] && i + 1 < len)
	{
		j = 0;
		while (((char *)haystack)[i + j] == ((char *)needle)[j])
		{
			if (!((char *)needle)[j + 1])
			{
				p = &((char *)haystack)[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (NULL);

}
