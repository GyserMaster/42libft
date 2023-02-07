/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrov <gyser.world@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:55:03 by spetrov           #+#    #+#             */
/*   Updated: 2023/02/02 17:55:03 by spetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*p_str1;
	unsigned char	*p_str2;
	int				r;

	if (!n)
		return (0);
	p_str1 = (unsigned char *)str1;
	p_str2 = (unsigned char *)str2;
	while (--n && *p_str1 == *p_str2)
	{
		p_str1++;
		p_str2++;
	}
	r = *p_str1 - *p_str2;
	return (r);
}