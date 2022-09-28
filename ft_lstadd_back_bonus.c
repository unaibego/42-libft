/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubegona <ubegona@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:19:42 by ubegona           #+#    #+#             */
/*   Updated: 2022/09/28 13:00:23 by ubegona          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	int		i;
	t_list	*ds;


	if (!*lst)
		*lst = new;
	else
	{
		ds = lst[0];
		i = 0;
		while (ds->next != NULL && ds != NULL)
		{
			ds = ds ->next;
			i++;
		}
		lst[i] = new;
	}
}
