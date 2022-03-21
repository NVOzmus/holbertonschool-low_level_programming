#include "main.h"

/**
 * _strlen - function to find length of a string
 * @str: string
 *
 * Return: length
 */

int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	;
	return (len);
}

/**
 *  create_file - function to create file
 *  @filename: pointer to filename
 *  @text_content: the content of the file to create
 *  Return: -1 on error, 1 on success
 */


int create_file(const char *filename, char *text_content)
{
	int descriptor;
	int _write;

	/*if not the filename, error*/
	if (!filename)
		return (-1);

	/*create and include proper permissions, else truncate*/
	descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (descriptor == -1)
		return (-1);

	/* if nothing to fill in, make newly created file */
	if (!text_content)
	{
		close(descriptor);
		return (1);
	}

	/*how to write info*/

	_write = write(descriptor, text_content, _strlen(text_content));
	if (_write == -1 || _write != _strlen(text_content))
	{
		close(descriptor);
		return (-1);
	}
	close(descriptor);
	return (1);
}
