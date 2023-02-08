/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrov <gyser.world@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 19:14:14 by spetrov           #+#    #+#             */
/*   Updated: 2023/02/07 19:14:14 by spetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
//BASE
int 	ft_strlen(const char *str);
void    ft_bzero(void *s, size_t n);
int 	ft_toupper(int c);
int 	ft_tolower(int c);
char*	ft_strchr(char * str, int c);
char* 	ft_strrchr(char * str, int c);
int		ft_strncmp(const char *str1, const char *str2, int n);
size_t	ft_strlcpy(char *dst, const char *src, size_t d_size);
size_t	ft_strlcat(char *dest, const char *src, size_t max);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
void    *ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
int     ft_atoi(const char *str);
char    *ft_strdup(const char *s);
void	*ft_calloc(size_t count, size_t size);

//EXTRA
char	*ft_substr(char const *str, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);

//BONUS