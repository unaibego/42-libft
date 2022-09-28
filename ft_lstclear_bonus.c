/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubegona <ubegona@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:20:20 by ubegona           #+#    #+#             */
/*   Updated: 2022/09/28 13:27:48 by ubegona          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	int	i;

	i = 0;
	while (lst[i] != NULL)
	{
		ft_lstdelone(lst[i], del);
		free(lst[i]);
		i++;
	}

}
