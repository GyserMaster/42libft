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

#ifndef LIBFT_H
# define LIBFT_H

# define FT_INT_MIN -2147483648
# define FT_INT_MAX 2147483647

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

typedef struct s_list
{
	void 	*content;
	struct	s_list *next;
}			t_list;

//BASE
int 	ft_strlen(const char *str);
int		c_in_str(char c, char const *set);
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
char 	**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);

//BONUS
t_list *ft_lstnew(void *content);
void ft_lstadd_front(t_list **lst, t_list *new);
#endif