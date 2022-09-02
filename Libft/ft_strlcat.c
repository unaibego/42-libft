/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubegona <ubegona@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 09:33:37 by ubegona           #+#    #+#             */
/*   Updated: 2022/08/31 13:57:01 by ubegona          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(dst);
	if (dstsize > len)
	{
		while ((i < dstsize - len - 1) && (src[i]) && dst[i])
		{
			printf("%u\n", i);
			dst[len + i] = src[i];
			i++;
		}
		dst[len + i] = '\0';
	}
	if (ft_strlen(src) > dstsize)
	{
		printf("kaixo\n");
		return (dstsize + len + 1);
		
	}
	else
	{
		printf("agura\n");
		return (len + ft_strlen(src));
		
	}
}
