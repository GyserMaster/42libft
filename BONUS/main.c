/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrov <gyser.petrov.42@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:12:12 by spetrov           #+#    #+#             */
/*   Updated: 2022/12/21 14:12:12 by spetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//BONUS
#include "ft_lstnew_bonus.c"
#include "ft_lstadd_front_bonus.c"
#include "ft_lstsize_bonus.c"
#include "ft_lstlast_bonus.c"
#include "ft_lstadd_back_bonus.c"
#include "ft_lstdelone_bonus.c"
#include "ft_lstclear_bonus.c"
#include "ft_lstiter_bonus.c"
#include "ft_lstmap_bonus.c"

int main(void)
{
    char dst[] = "ABC?DEF?GHI";
    char src[] = "?";
	unsigned int n = -2147483628;
	t_list	*buffer;
	
	buffer = ft_lstnew("Hola");
	printf("\n>> %s", buffer->content);
	printf("\n>> 0x%p | %s", buffer->next, buffer->next);

	ft_lstadd_front(&buffer, ft_lstnew("que tal"));
	printf("\n>> %s", buffer->content);
	printf("\n>> 0x%p", buffer->next);

	ft_lstadd_front(&buffer, ft_lstnew("estais chicos"));
	printf("\n>> %s", buffer->content);
	printf("\n>> 0x%p", buffer->next);

	printf("\n>> Last = %s | %s", ft_lstlast(buffer)->content, ft_lstlast(buffer)->next);
	ft_lstadd_back(&buffer, ft_lstnew("ft_lstadd_back()"));
	printf("\n>> Last = %s | %s", ft_lstlast(buffer)->content, ft_lstlast(buffer)->next);

	//ft_lstdelone(buffer, del);
	printf("\n>> Size = %d", ft_lstsize(buffer));
    printf("\n>> --- DEBUG TEST ---");
    return (0);
}
