#include"libft.h"

/*
 * @brief concatenate two string
 * @param dst address of the first character of first string
 * @param src address of the first character of second string
 * @param size of the buffer
 * @return length of dst + lengh of src
 */
size_t strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(dst);
	while(i < size - 1)
	{
		dst[i + len] = src[i];
		i++;
	}
	dst[i] = 0;
	while(src[i])
		i++;

	return (i);
}
