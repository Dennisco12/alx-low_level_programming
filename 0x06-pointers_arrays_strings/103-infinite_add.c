#include "main.h"

/**
 * infinite_add - A function that adds two numbers to a string
 * @n1: The first number to be added
 * @n2: The second number to be added
 * @r: the buffer to store the result
 * @size_r: the buffer size
 * Return: r or 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, big, p, q, s, x;

	i = 0;
	j = 0;
	x = 0;
	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i >= j)
		big = i;
	else
		big = j;
	if (size_r <= big + 1)
		return (0);
	r[big + 1] = '\0';
	i--, j--, size_r--;
	p = n1[i] - 48, q = n2[j] - 48;
	while (big >= 0)
	{
		s = p + q + x;
		if (s >= 10)
			x = s / 10;
		else
			x = 0;
		if (s > 0)
			r[big] = (s % 10) + 48;
		else
			r[big] = '0';
		if (i > 0)
			i--, p = n1[j] - 48;
		else
			p = 0;
		if (j > 0)
			j--, q = n2[j] - 48;
		else
			q = 0;
		big--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
