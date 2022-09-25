/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:18:39 by marvin            #+#    #+#             */
/*   Updated: 2022/09/24 18:18:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct t_list
{
	void			*content;
	struct t_list	*next;
}					t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*primerelemento;
	primerelemento = malloc(sizeof(t_list));
	primerelemento->content = content;
	primerelemento->next = NULL;
	
}

int main()
{
	printf("a ver que sale %s", ft_lstnew("hola"));
	return 0;
}