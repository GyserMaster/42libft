/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrov <gyser.world@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:56:58 by spetrov           #+#    #+#             */
/*   Updated: 2022/12/22 13:56:58 by spetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, int n)
{
	int i;

	i = 0;
	while ((str1[i] && str2[i]) && n)
	{
		if (str1[i] != str2[i])
			return (-1);
		i++;
		n--;
	}
	if ((!str2[i] || !str2[i]) && n)
		return (1);
	return (0);
}