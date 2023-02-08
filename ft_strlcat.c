/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrov <gyser.world@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:13:48 by spetrov           #+#    #+#             */
/*   Updated: 2022/12/21 14:13:48 by spetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t max)
{
	int	i;
	int	d_size;

	d_size = 0;
	while (dest[d_size] != '\0' && d_size < max)
		d_size++;
	i = d_size;
	while (src[d_size - i] && d_size + 1 < max)
	{
		dest[d_size] = src[d_size - i];
		d_size++;
	}
	if (i < max)
		dest[d_size] = '\0';
	return (i + ft_strlen(src));
}