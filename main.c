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
#include "ft_memcmp.c"
#include "EXTRA/ft_substr.c"
#include "EXTRA/ft_strjoin.c"
int main(void)
{
    char dst[] = "ABCDE";
    char src[] = "ABCDE";
	int n = 2;
    printf(">> %s | %s", dst, src);
    printf("\n>> %s", ft_strjoin(dst, src));
    printf("\n>> %s | %s", dst, src);
    return (0);
}