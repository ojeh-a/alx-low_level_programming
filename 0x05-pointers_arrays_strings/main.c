#include <stdio.h>

void modif_my_param( int *m)
{
	printf("value of 'm': %p\n", m);
	printf("Address of 'm': %p\n", &m);
	*m = 402;
}

int main(void)
{
	int n;
	int *p;

	p = &n;
	n = 98;
	printf(" value of n before the call is %d\n", n);
	printf("address of n is %p\n", &n);
	printf("value of p is %p\n", p);
	printf("address of p %p\n", &p);
	modif_my_param(p);
	printf("value of n after the call is %d\n", n);
	return (0);
}
