/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrov <gyser.world@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:46:01 by spetrov           #+#    #+#             */
/*   Updated: 2022/12/21 15:46:01 by spetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char * ft_strchr(char * str, int c)
{
	char aux;

	while (str[0] != c)
	{
		aux = str[0];
		str++;
	}
	if (aux == '\0')
		return (0);
	return (str);
}