/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrov <gyser.world@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:07:25 by spetrov           #+#    #+#             */
/*   Updated: 2023/02/07 15:07:25 by spetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*buffer;

	buffer = malloc(count * size);
	if (!(buffer))
		return (NULL);
	ft_bzero(buffer, count * size);
	return (buffer);
}
