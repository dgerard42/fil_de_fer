
#include "libft.h"

int			main(void)
{
	int **array;

	array = ft_2dintarray(7, 7);
	ft_2dfreearray((void **)array, 7);
}
