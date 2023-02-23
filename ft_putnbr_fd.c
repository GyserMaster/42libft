/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrov <gyser.world@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:28:02 by spetrov           #+#    #+#             */
/*   Updated: 2023/02/07 15:28:02 by spetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	unsigned int	m;

	if (n < 0)
	{
		m = (unsigned int)(n * (-1));
		ft_putchar_fd('-', fd);
	}
	else
		m = (unsigned int)n;
	if (m >= 10) //123 / 12 / 1 close
		ft_putnbr_fd((int)(m / 10), fd); //12/ 1 /  1<10 -> ft_putchar_fd(1)CLOSE 
	ft_putchar_fd((char)(m % 10 + '0'), fd); //3 / 2 
}
