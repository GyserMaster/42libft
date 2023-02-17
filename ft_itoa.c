/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrov <gyser.world@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:25:02 by spetrov           #+#    #+#             */
/*   Updated: 2023/02/07 15:25:02 by spetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	static	ft_count_dig(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * (-1);
		i++;
	}
	while (n >= 1)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
char			*ft_itoa(int n)
{
	long long	m;
	char * 	buffer;
	int		digits;

	m = n;
	digits = ft_count_dig(m);
	if (n == -2147483648)
		return("-2147483648");
	if (!(buffer = malloc(sizeof(char*) * digits + 1)))
		return (0);
	if (m < 0)
		m = m * (-1);
	buffer[digits] = '\0';
	while (digits--)
	{
		buffer[digits] = m % 10 + '0';
		m = m / 10;
	}
	if (n < 0)
		buffer[0] = '-';
	return (buffer);
}