/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrov <gyser.world@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:24:04 by spetrov           #+#    #+#             */
/*   Updated: 2023/02/07 15:24:04 by spetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static char	*get_buffer(char const *s, size_t start, size_t max)
{
	char		*buffer;
	size_t		index;

	index = 0;
	if (!(buffer = (char *)malloc(8 * (max - start + 1))))
		return (NULL);
	while (start < max)
	{
		buffer[index] = s[start];
		start++;
		index++;
	}
	buffer[index] = '\0';
	return (buffer);
}
static char **ft_get_array_buffer(size_t size)
{
	char **buffer;

	buffer = (char **)malloc(8 * (size + 1));
	if (!(buffer))
		return (NULL);
	
	return (buffer);
}

static char		**ft_malloc_error(char **result)
{
	size_t		idx2;

	idx2 = 0;
	while (result[idx2])
	{
		free(result[idx2]);
		result[idx2] = NULL;
		idx2++;
	}
	free(result);
	return (NULL);
}

char **ft_split(char const *s, char c)
{
	char ** array;
	size_t		i;
	size_t		x;
	size_t		start;

	i = 0;
	x = 0;
	start = ft_strlen(s) - ft_c_count(c, s);
	if (!(array = ft_get_array_buffer(start)))
		return (NULL);
	
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			array[x] = get_buffer(s, start, i);
			if (!(array[x]))
				return (ft_malloc_error(array));
			x++;
		}
		else
			i++;
	}
	array[x] = NULL;
	//printf("\n>> x = %d", x);
	return (array);
}
