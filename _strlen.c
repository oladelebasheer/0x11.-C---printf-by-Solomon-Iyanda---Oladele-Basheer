#include "main.h"

/**
 * _strlen - gets length of string
 *
 * @str: string of chars
 *
 * Return: length of string
 * or -1 if something went wrong
 */

int _strlen(char *str)
{
	int len = 0;

	if (str == NULL) return (-1);

	while (*str != '\0')
	{
		len++;
		str++;
	}

	return (len);
}


int main(void)
{
	char *str = " Hello there, this is team Solomon and Oladele";
	int len = 0;

	len = _strlen(str);

	printf("the lrngth of the string is: %d\n", len);

	return (0);
}
