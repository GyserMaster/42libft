/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrov <gyser.world@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:22:11 by spetrov           #+#    #+#             */
/*   Updated: 2023/02/07 15:22:11 by spetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char* sub;
	int		i;
	int		y;
	if ((!(s1) && !(s2)))
		return (NULL);
	if (!(sub = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1)))
        return (NULL);
	i = 0;
	y = 0;
	while (s1[i] != '\0')
	{
		sub[i] = s1[i];
		i++;
	}
	while (s2[y] != '\0')
	{
		sub[i] = s2[y];
		i++;
		y++;
	}
	sub[i] = '\0';
	return (sub);
}