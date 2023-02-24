/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrov <gyser.world@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:12:12 by spetrov           #+#    #+#             */
/*   Updated: 2022/12/21 14:12:12 by spetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strlen.c"
#include "ft_c_str.c"
#include "ft_c_count.c"
#include "ft_memcmp.c"
#include "ft_strdup.c"
#include "ft_strlcpy.c"
#include "ft_strnstr.c"
#include "ft_strncmp.c"
//EXTRA
#include "ft_substr.c"
#include "ft_strjoin.c"
#include "ft_strtrim.c"
#include "ft_split.c"
#include "ft_itoa.c"
#include "ft_atoi.c"
#include "ft_strmapi.c"
#include "ft_striteri.c"
#include "ft_putchar_fd.c"
#include "ft_putstr_fd.c"
#include "ft_putendl_fd.c"
#include "ft_putnbr_fd.c"

char	mapi(unsigned int i, char c)
{
	return ('X');
}
int main(void)
{
    char dst[] = "?????ABC?DEF??";
    char src[] = "???";
	int n = -2147483648;
	t_list * buffer;
	char ** array;

    printf(">> %s | %s", dst, src);
	printf("\n>> %s", ft_itoa(0));

    printf("\n>> %s | %s", dst, src);
    return (0);
}

/*
// FT_SPLIT
int main(void)
{
    char dst[] = "????ABC?DEF???IJK?LMN?sodifjsodifosjdof??";
    char src[] = "?";
	char **buffer;
	int n = 6;
    printf(">> %s | %s", dst, src);
	buffer = ft_split(dst, '?');
	while (n)
	{
		printf("\n>> %s", *buffer);
		buffer++;
		n--;
	}
	buffer = (void *)0;
    //printf("\n>> %s", ft_split(dst, '?'));
    printf("\n>> %s | %s", dst, src);
    return (0);
}
*/