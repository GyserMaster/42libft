/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrov <gyser.world@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:02:54 by spetrov           #+#    #+#             */
/*   Updated: 2023/02/07 15:02:54 by spetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_atoi(const char *str)
{
    int num;
    int sign;

    num = 0;
    sign = 1;
    while (ft_isspace(*str))
        str++;
    if (*str == '-')
        sign = - 1;
    if (*str == '-' || *str == '+')
        str++;
    while (*str >= '0' && *str <= '9')
        num = num * 10 + *str++ - '0';
    return (num * sign);
}