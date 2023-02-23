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

size_t	ft_count_words(const char *s, char c)
{
	size_t	i;
	size_t	size;
	
	i = 0;
	size = 0;
	if (!(c))
		return((size_t)1);
	
	while (s[i] != '\0')
	{
		if (s[i] != c)
			size++;
		i++;
	}
	return (size);
}




char **ft_split(char const *s, char c)
{
	char	**array;
	size_t	size;
	size_t	start;
	size_t	end;
	int		i;

	if (!s)
		return (NULL);
	size = ft_count_words(s, c);
	//printf("\n>> size = %d", size);
	if (!(array = (char **)malloc(sizeof(char *) * (size + 1))))
		return (NULL);
	start = 0;
	i = 0;
	while (s[start] != '\0' && start <= size)
	{
		if (s[start] != c && s[start] != '\0') // "ABC?DEF"
		{
			end = start;
			while (s[end] != c && s[end] != '\0')
			{
				end++;
			}
			//printf("\n>> start = %d | end = %d", start, end);
			array[i] = ft_substr(s, start, end - start);
			start = end; // 7 = 7
			i++;
		}
		start++;
	}
	array[i] = NULL;
	return (array);
}
