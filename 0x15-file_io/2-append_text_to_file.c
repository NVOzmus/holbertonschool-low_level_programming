#include "main.h"

/**
 * _strlen - measures the string length
 * @str: variable representing the string
 * Return: the length
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	return (len);
}

/**
 * append_text_to_file - appends text to file
 * @filename: pointer measuring to the filename
 *  @text_content: pointer to the text content of said filename
 */

int append_text_to_file(const char *filename, char *text_content)
{
	
	int descriptor;
	int _write;
	
	if (!filename)
		return (-1);

	descriptor = open(filename, O_WRONLY | O_APPEND);
	if (descriptor == -1)
		return (-1);

	if (!text_content)
	{
		close(descriptor);
		return (1);
	}
	_write = write(descriptor, text_content, _strlen(text_content));
	if (_write == -1 || _write != _strlen(text_content))
	{
		close(descriptor);
		return (-1);
	}
	close (descriptor);
	return (1);
}
