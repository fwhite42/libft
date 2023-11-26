#include<stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
	void* memory;
	memory = malloc(count*size);
	bzero(memory, count*size);
	return memory	
}
