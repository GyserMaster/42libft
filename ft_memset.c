/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrov <gyser.petrov.42@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:58:10 by spetrov           #+#    #+#             */
/*   Updated: 2022/12/13 17:39:48 by spetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int c, unsigned int len)
{
	unsigned char	*p;

	p = str;
	while (len--)
	{
		*p++ = (unsigned char)c;
	}
	return (str);
}
