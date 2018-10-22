#include "libft.h"
#include <stdio.h>

/*
int			 main(void)
{
	t_list	*list;
	int		ft;

	ft = 42;
	printf("seghere1\n");
	list = ft_lstnew(&ft, sizeof(int));
	printf("seghere2\n");
	if(!(!!list))
		printf("error 1\n");
	printf("seghere3\n");
	if(!((*(int*)(list->content)) == 42))
		printf("error 2\n");
	printf("seghere4\n");
	list = ft_lstnew(NULL, 386);
	printf("seghere5\n");
	if(!((list->content_size) == 0))
		printf("error 3\n");
}
*/
int					main(void)
{
	t_list	*begin;
	size_t	v;

	v = 1;
	begin = ft_lstnew(NULL, 36);
	if (begin != 0 && (begin->content_size != 0 || begin->content != NULL))
		printf("error here 0\n");
	free(begin);
	begin = ft_lstnew(&v, sizeof(size_t));
	if (begin != NULL)
	{
		if (&v == begin->content)
			printf("error here 1\n");
		if (*(size_t*)begin->content != 1)
			printf("error here 2\n");
		if (begin->content_size != sizeof(size_t))
			printf("error here 3\n");
		if (begin->next != 0)
			printf("error here 4\n");
	}
	free(begin);
	return (1);
}
