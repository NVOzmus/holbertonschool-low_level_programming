#include "main"
/**
 * _isalpha - searches if character is alphanumeric
 * @c: reference character
 *
 *
 * Return:0
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
