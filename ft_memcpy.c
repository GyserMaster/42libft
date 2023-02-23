/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrov <gyser.petrov.42@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 19:58:30 by spetrov           #+#    #+#             */
/*   Updated: 2023/01/22 21:25:45 by spetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, int n)
{
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dst;
	d = 0;
	if (dst == 0 && src == 0)
		return (d);
	while (n--)
	{
		*d++ = *s++;
	}
	return (d);
}

/*
{
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dst;

	if (dst == 0 && src == 0)
		return (dst);
	while (n--)
	{
		*d++ = *s++;
	}
	
	*d = '\0';
	return (dst);
}

{
	int i;
	char *d;
	char *s;
	
	d = (char*)dst;
	s = (char*)src;

	i = 0;
	if (!dst && !src)
		return (0);
	while (n > 0)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	//d[i] = '\0';
	
	return (dst);
}
*/