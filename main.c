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
#include "ft_toupper.c"
#include "ft_tolower.c"
#include "ft_strchr.c"
#include "ft_strrchr.c"
#include "ft_strncmp.c"
#include <ctype.h>
int main(void)
{
    char str1[] = "To Debug-ging Test";
    char str2[] = "To D";
	int n = 5;
    printf(">> %s | %s", str1, str2);
    printf("\n>> %d", strncmp(str1, str2, n));
    printf("\n>> %d", ft_strncmp(str1, str2, n));
    printf("\n>> %s | %s", str1, str2);
    return (0);

}