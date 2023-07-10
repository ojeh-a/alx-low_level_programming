#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * _atoi - converts string to digit.
  *@s: string
  *Return: 0
  */
int _atoi(char *s)
{
	const char *str = "12345";
	int num = atoi(str);

	printf("The converted number is: %d\n", num);
	return (0);
}

