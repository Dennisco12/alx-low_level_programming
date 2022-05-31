#include <unistd.h>

/**
<<<<<<< HEAD
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
=======
 * _putchar - writes c to stdout
 * @c: the char to input
 * Return: 1 on success or -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
>>>>>>> 522e8e7af40b0c47cf9358a08205408d7d7e92bd
}
