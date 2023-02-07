/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrov <gyser.world@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:13:39 by spetrov           #+#    #+#             */
/*   Updated: 2022/12/21 14:13:39 by spetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t      ft_strlcpy(char *dst, const char *src, size_t d_size)
{
    size_t	i;
	int		len;

    i = 0;
	len = ft_strlen(src);
    if (!src || !dst)
        return (0);
    if (d_size != 0)
	{
		while (src[i] != '\0' && i < d_size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
    return (len);
}