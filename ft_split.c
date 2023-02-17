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

char	*get_buffer(char const *s, int start, int max)
{
	char *	buffer;
	int		index;

	index = 0;
	if (!(buffer = malloc(sizeof(char*) * (max - start) + 1)))
		return (0);
	while (start < max)
	{
		buffer[index] = s[start];
		start++;
		index++;
	}
	buffer[index] = '\0';
	return (buffer);
}

char **ft_split(char const *s, char c)
{
	char ** array;
	int		i;
	int		x;
	int		start;

	i = 0;
	x = 0;
	start = 0;
	if (!(array = malloc(sizeof(char*) * (ft_strlen(s) - c_in_str(c, s) + 1))))
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != c)
				i++;
			array[x] = get_buffer(s, start, i);
			x++;
		}
		else
			i++;
	}
	array[x] = (void*)0;
	return (array);
}