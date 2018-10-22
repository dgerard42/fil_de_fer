
#include "libft.h"

t_list	*lstmap_test_fn(t_list *list)
{
	t_list	*l2;

	l2 = malloc(sizeof(t_list));
	bzero(l2, sizeof(t_list));
	l2->content = malloc(list->content_size * 2);
	l2->content_size = list->content_size * 2;
	return (l2);
}

int		 main(void)
{
	t_list	*list;
	t_list	*map;

	bzero((list = malloc(sizeof(t_list))), sizeof(t_list));
	bzero((list->next = malloc(sizeof(t_list))), sizeof(t_list));
//	printf("1\n");
	list->content_size = 21;
//	printf("2\n");
	list->content = strdup("abc");
	list->next->content_size = 100;
	list->next->content = strdup("abc");
	map = ft_lstmap(list, lstmap_test_fn);
	if(!(list->content_size == 21))	
		printf("error here 0\n");
	if(!(list->next->content_size == 100))
		printf("error here 1\n");
	if(!(!!map && map->content_size == 42))
		printf("error here 2\n");
	if(!(!!map && map->next->content_size == 200))
		printf("error here 3\n");
}
