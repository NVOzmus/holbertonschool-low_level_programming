#include "main.h"
/**
 *  _strstr - main function
 * @haystack: string searched for
 * @needle: substring searched for
 * Return: pointer, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	const char *a;
	const char *b;
	
	for (a = 0; haystack[byte] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
		}
		if (!needle[b])
		{
			return (&haystack[a]);
		}

	}
	return (NULL);
}
