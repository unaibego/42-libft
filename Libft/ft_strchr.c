/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubegona <ubegona@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:54:17 by ubegona           #+#    #+#             */
/*   Updated: 2022/09/01 16:38:18 by ubegona          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			*p;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	p = &((char *)s)[i];
	if (s[i] == c)
		return (p);
	else
		return ("(null)");
}
