/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrov <gyser.world@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:31:25 by spetrov           #+#    #+#             */
/*   Updated: 2023/02/07 15:31:25 by spetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*buffer;

	if (*lst)
	{
		while (*lst)
		{
			buffer = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = buffer;
		}
		*lst = 0;
	}
}