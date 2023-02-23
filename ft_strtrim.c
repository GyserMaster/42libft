/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrov <gyser.world@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:22:53 by spetrov           #+#    #+#             */
/*   Updated: 2023/02/07 15:22:53 by spetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char	*sub;
	int		i;
	int		j;
	int		x;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (ft_c_str(s1[i], set))
		i++;
	while (ft_c_str(s1[j], set))
		j--;
	if(!(sub = malloc(sizeof(char) * (j - i) + 1)))
        return (0);
	x = 0;
	while (i <= j)
		sub[x++] = s1[i++];
	sub[x] = '\0';
	return (sub);
}
