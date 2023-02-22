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

//BONUS
#include "ft_lstnew.c"
#include "ft_lstadd_front.c"
#include "ft_lstsize.c"
#include "ft_lstlast.c"
#include "ft_lstadd_back.c"
#include "ft_lstdelone.c"
#include "ft_lstclear.c"
#include "ft_lstiter.c"
#include "ft_lstmap.c"

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

/*
// FT_SPLIT
int main(void)
{
    char dst[] = "????ABC?DEF???IJK?LMN?sodifjsodifosjdof??";
    char src[] = "?";
	char **buffer;
	int n = 6;
    printf(">> %s | %s", dst, src);
	buffer = ft_split(dst, '?');
	while (n)
	{
		printf("\n>> %s", *buffer);
		buffer++;
		n--;
	}
	buffer = (void *)0;
    //printf("\n>> %s", ft_split(dst, '?'));
    printf("\n>> %s | %s", dst, src);
    return (0);
}
*/