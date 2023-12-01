#include"libtest.h"

void *brandom(void * buff, size_t n)
{
	int fd = open("/dev/random", O_RDONLY);
	printf("fd : %i\n",fd);
	read(fd, buff, 10);
	printf("closed: %i\n", close(fd));
	return NULL;
}
