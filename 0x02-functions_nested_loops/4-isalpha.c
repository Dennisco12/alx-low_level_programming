#include "main.h"

/**
 * _isalpha - all entry point
 * @l: input value
 * Return: 1 if value is a char, return 0 if otherwise
 */

int _isalpha(int l)
{
	if (((l >= 'a') && (l <= 'z')) || ((l >= 'A') && (l <= 'Z')))
		return (1);
	else
		return (0);
}
