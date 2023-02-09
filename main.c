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
#include "c_in_str.c"
#include "ft_memcmp.c"
//EXTRA
#include "ft_substr.c"
#include "ft_strjoin.c"
#include "ft_strtrim.c"
#include "ft_split.c"

int main(void)
{
    char dst[] = "ABC?DEF?IJK?LMN";
    char src[] = "E";
	int n = 2;
    printf(">> %s | %s", dst, src);
    printf("\n>> %s", ft_split(dst, '?'));
    printf("\n>> %s | %s", dst, src);
    return (0);
}