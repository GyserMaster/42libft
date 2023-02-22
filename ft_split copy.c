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

static size_t	ft_word_break(char const *s, char c)
{
	size_t		i;
	size_t		n_break;

	i = 0;
	n_break = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			n_break++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (n_break);
}

static char		*ft_word_cpy(char *word, size_t word_len,
					char const *s, int pre_idx1)
{
	size_t		idx3;

	idx3 = 0;
	while (idx3 < word_len)
	{
		word[idx3] = s[pre_idx1 + idx3];
		idx3++;
	}
	word[idx3] = '\0';
	return (word);
}

static char		**ft_word_malloc(char **result,
				size_t n_break, char const *s, char c)
{
	size_t		idx2;
	size_t		idx1;
	size_t		pre_idx1;
	size_t		word_len;

	idx2 = 0;
	idx1 = 0;
	word_len = 0;
	while (s[idx1] && idx2 < n_break)
	{
		while (s[idx1] && s[idx1] == c)
			idx1++;
		pre_idx1 = idx1;
		while (s[idx1] && s[idx1++] != c)
			word_len++;
		if (!(result[idx2] = (char *)malloc(sizeof(char) * (word_len + 1))))
			return (ft_malloc_error(result));
		ft_word_cpy(result[idx2], word_len, s, pre_idx1);
		word_len = 0;
		idx2++;
	}
	result[idx2] = 0;
	return (result);
}

char			**ft_split(char const *s, char c)
{
	size_t		n_break;
	char		**result;

	if (s == NULL)
		return (NULL);
	n_break = ft_word_break(s, c);
	if (!(result = (char **)malloc(sizeof(char *) * (n_break + 1))))
		return (NULL);
	result[n_break] = NULL;
	ft_word_malloc(result, n_break, s, c);
	return (result);
}

/*
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
	if (!(array = malloc(sizeof(char*) * (ft_strlen(s) - ft_c_str(c, s) + 1))))
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
*/