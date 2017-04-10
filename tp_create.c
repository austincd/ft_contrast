#include "ft_contrast.h"

pthread_t *tp_create(int num)
{
	int		thread;
	pthread_t	*pool;	

	pool = NULL;
	pool = (pthread_t*)ft_memalloc(sizeof(pthread_t) * num);
	if (pool)
	{
		while (thread < num)
		{
			pthread_create(pool + thread, NULL);
			++thread;
		}
	}
	return (pool);
}
