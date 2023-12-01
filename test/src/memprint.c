#include<stdio.h>
#include<stdlib.h>

void memprint(void *mem, size_t len)
{

	printf("Buffer<");
	while(len--)
	{
		printf("%u", *(unsigned char *)mem);
		if (len)
			printf(" ");
			mem++;
	}
	printf(">\n");
}
