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
	char		*sub;
	size_t		i;

	if (!s)
		return (NULL);
	if (start > (unsigned)ft_strlen(s))
		return (ft_strdup(""));
	if (len > (size_t)ft_strlen(s))
		len = ft_strlen(s);
	sub = malloc(len + 1);
	if (!(sub))
		return (NULL);
	i = 0;
	while (len-- && s[start] != '\0')
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return(sub);
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