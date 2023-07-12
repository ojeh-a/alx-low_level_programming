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
	int reslt = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ' || s[i] == '\t')
	{
		i++;
	}
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		reslt = reslt * 10 + (s[i] - '0');
	}
	return (reslt *  sign);
}

