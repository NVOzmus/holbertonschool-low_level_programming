#include "main.h"

/**
 *  read_textfile - reads text file
 *  @filename: variable to measure file na,e
 *  @letters: letter variable
 *  Return: actual size, otherwise 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int descriptor;
	ssize_t _read, _write;
	char *buffer;

	if (filename == NULL)
		return (0);

	/*opens the file */

	descriptor = open(filename, O_RDONLY);
	if (descriptor == -1)
		return (0);

	/*buffers memory space*/
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/*The actual reading*/
	_read = read(descriptor, buffer, letters);
	if (_read == -1)
	{
		free(buffer);
		close(descriptor);
		return (0);
	}

	/*writing implimentation*/

	_write = write(STDOUT_FILENO, buffer, _read);
	if (_write == -1)
	{
		free(buffer);
		close(descriptor);
		return (0);
	}
	close(descriptor);
	return (_read);
}
