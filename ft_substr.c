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

char *ft_substr(char const *str, unsigned int start, size_t len)
{
	char* sub;
	int		i;

	if (!(len))
		return (NULL);
	if (!(sub = malloc(sizeof(char) * (len + 1))))
        return (NULL);
	i = 0;
	while (len-- && str[start] != '\0')
	{
		sub[i] = str[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return(sub);
}