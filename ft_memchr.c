/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrov <gyser.world@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:35:08 by spetrov           #+#    #+#             */
/*   Updated: 2023/02/02 14:35:08 by spetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_memchr(const void *str, int c, size_t n)
{
    unsigned char *p;

    p = (unsigned char *)str;
    while (n)
	{
		if (*p == (unsigned char)c)
            return (p);
		*p++;
		n--;
	}
    return (NULL);
}