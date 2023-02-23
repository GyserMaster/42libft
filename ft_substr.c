/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrov <gyser.world@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:21:19 by spetrov           #+#    #+#             */
/*   Updated: 2023/02/07 15:21:19 by spetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_get_buffer(size_t len)
{
	char	*buffer;

	buffer = malloc(sizeof(char) * (len)+1);
	if (!(buffer))
		return (NULL);
	return (buffer);
	
}
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	char	*buffer;

	if (!s)
		return (NULL);
	if ((unsigned)ft_strlen(s) < start)
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	buffer = malloc(len + 1);
	if (!buffer)
		return (NULL);
	ft_strlcpy(buffer, s + start, len + 1);
	return (buffer);
}
/*
	size_t	out_len;
	char	*out;

	if (!s)
		return (NULL);
	if ((unsigned)ft_strlen(s) < start)
		return (ft_strdup(""));
	out_len = ft_strlen(s + start);
	if (out_len < len)
		len = out_len;
	out = malloc(len + 1);
	if (!out)
		return (NULL);
	ft_strlcpy(out, s + start, len + 1);
	return (out);
*/