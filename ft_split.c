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

char **ft_split(char const *s, char c)
{
	char * sub;
	int		i;

	i = 0;
	if(!(sub = malloc(sizeof(char) * ft_strlen(s) + 1)))
        return (NULL);
	while (s[i] != '\0')
	{
		sub[i] = s[i];
		if (sub[i] == c)
			sub[i] = ' ';
		i++;
	}
	sub[i] = '\0';
	return (sub);
}