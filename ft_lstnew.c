/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrov <gyser.world@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:28:32 by spetrov           #+#    #+#             */
/*   Updated: 2023/02/07 15:28:32 by spetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *buffer;

	if (!(buffer = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	buffer->content = content;
	buffer->next = NULL;
	return (buffer);
}