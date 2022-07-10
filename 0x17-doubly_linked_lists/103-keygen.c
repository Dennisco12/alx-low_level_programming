#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * big - checks the biggest number
 * @usr: Inputted username
 * @len: username length
 * Return: the biggest number
 */

int big(char *usr, int len)
{
	int n, m;
	unsigned int rand_num;

	n = *usr;
	m = 0;

	while (m < len)
	{
		if (n < usr[m])
			n = usr[m];
		m++;
	}
	srand(n ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * mul - multiples each ch of username
 * @usr: username
 * @len: length of username
 * Return: multiplied char
 */

int mul(char *usr, int len)
{
	int n, m;

	n = 0;
	m = 0;

	while (m < len)
	{
		n += usr[m] * usr[m];
		m++;
	}
	return (((unsigned int)n ^ 239) & 63);
}

/**
 * rand_ch - generates a random char
 * @usr: username
 * Return: a random char
 */

int rand_ch(char *usr)
{
	int n, m;

	n = 0;
	m = 0;

	while(m < *usr)
	{
		n = rand();
		m += 1;
	}
	return (((unsigned int)n ^ 220) & 63);
}

/**
 * main - runs code
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char keygen[7];
	int len, n, m;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (len = 0; argv[1][len]; len++)
		;
	keygen[0] = ((char *)alph)[(len ^ 59) & 63];

	n = 0;
	m = 0;
	while (m < len)
	{
		n += argv[1][m];
		m++;
	}
	keygen[1] = ((char *)alph)[(n ^ 79) & 63];

	n = 1;
	m = 0;
	while(m < len)
	{
		n = argv[1][m] * n;
		m++;
	}
	keygen[2] = ((char *)alph)[(n ^ 85) & 63];

	keygen[3] = ((char *)alph)[big(argv[1], len)];

	keygen[4] = ((char *)alph)[mul(argv[1], len)];

	keygen[5] = ((char *)alph)[rand_ch(argv[1])];

	keygen[6] = '\0';

	for (n = 0; keygen[n]; n++)
		printf("%c", keygen[n]);

	return (0);
}
