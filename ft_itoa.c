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

static int	ft_count_dig(long int n)
{
	int	i;

	i = 0;
	if ((unsigned long)n == 2147483648UL)
		return (11);
	if (n <= 0)
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
int		ft_mypow(int x, int y)
{
	while (y)
	{
		x = x * x;
		y--;
	}
	return x;
}
char			*ft_itoa(int n)
{
	long int	m;
	char 	*buffer;
	int		digits;

	m = n;
	digits = ft_count_dig(n); // cuenta el negativo (-) como digito
	if (!(buffer = malloc(sizeof(char) * (digits + 1))))
		return (0);
	if ((unsigned long)m == 2147483648UL)
		return ("-2147483648");
	if (m == (0))
	{
		buffer[0] = '0';
		buffer[1] = '\0';
		return (buffer);
	}
	if (m < 0)
	{
		m = m * (-1);
		buffer[0] = '-';
	}
	buffer[digits] = '\0';
	while (--digits >= 0)
	{
		buffer[digits] = m % 10 + '0';
		m = m / 10;
	}
	if (buffer[0] == '0')
		buffer[0] = '-';
	return (buffer);
}
/*
#include "libft.h"

static unsigned int	get_nb_digit(long n_l, int sign)
{
	unsigned int	nb_digit;

	if (n_l == 0)
		return (1);
	nb_digit = 0;
	while (n_l > 0)
	{
		n_l /= 10;
		nb_digit++;
	}
	if (sign == -1)
		nb_digit++;
	return (nb_digit);
}

static void			convert_nb(char *outstr, long n_l, unsigned int nb_digit,
		int sign)
{
	outstr[nb_digit] = '\0';
	outstr[--nb_digit] = n_l % 10 + '0';
	n_l /= 10;
	while (n_l > 0)
	{
		outstr[--nb_digit] = n_l % 10 + '0';
		n_l /= 10;
	}
	if (sign == -1)
		outstr[0] = '-';
}

char				*ft_itoa(int n)
{
	char			*outstr;
	long			n_l;
	unsigned int	nb_digit;
	int				sign;

	sign = 1;
	if (n < 0)
	{
		n_l = (long)n * -1;
		sign = -1;
	}
	else
		n_l = n;
	nb_digit = get_nb_digit(n_l, sign);
	printf("\n>> %d", nb_digit);
	if (!(outstr = malloc(sizeof(char) * (nb_digit + 1))))
		return (NULL);
	convert_nb(outstr, n_l, nb_digit, sign);
	return (outstr);
}
*/