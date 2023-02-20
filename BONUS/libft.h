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

//BONUS
t_list *ft_lstnew(void *content);
void ft_lstadd_front(t_list **lst, t_list *new);
int ft_lstsize(t_list *lst);
//t_list *ft_lstlast(t_list *lst);
//void ft_lstadd_back(t_list **lst, t_list *new);
//void ft_lstdelone(t_list *lst, void (*del)(void*));
//void ft_lstclear(t_list **lst, void (*del)(void*));
//void ft_lstiter(t_list *lst, void (*f)(void *));
//t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *));

#endif