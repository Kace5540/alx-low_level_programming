#include "main.h"
/**
 * *_strcpy - the function
 * @dest: copy
 * @src: copy from
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < 1; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}

