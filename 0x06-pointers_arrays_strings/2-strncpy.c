#include "holberton.h"

/**
 * *_strncat - main function
 * @dest: 
 * @src
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int destlen;
	/* measures the length of dest*/
	for (destlen = 0; dest[destlen] !='\0'; destlen++)
	{}
	/* measures the length from src*/
	for (i = 0; i < n; i++)
	{
		dest[destlen + i] = src[i];
		if (src[i] = '\0')
			break;
	}
	dest[dest_len +i] = '\0';
	return (dest);
}
