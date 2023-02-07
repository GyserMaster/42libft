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


#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "ft_strlen.c"
#include "ft_toupper.c"
#include "ft_tolower.c"
#include "ft_strchr.c"
#include "ft_strrchr.c"
#include "ft_strncmp.c"
#include "ft_strlcpy.c"
#include "ft_strlcat.c"
#include "ft_memchr.c"
#include "ft_memcmp.c"
#include "ft_calloc.c"
#include "ft_strdup.c"

int main(void)
{
    char dst[] = "ABCDE";
    char src[] = "ABCDEf";
	int n = 2;
    printf(">> %s | %s", dst, src);
    printf("\n>> %d", ft_memcmp(dst, src, 0));
    printf("\n>> %s | %s", dst, src);
    return (0);
}