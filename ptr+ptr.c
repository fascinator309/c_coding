#include<stdio.h>

int main()
{
   int i=2;
   int o=3;
   	printf("%u\n",&i);
	printf("%u\n",&o);

	int *a=&i;
	int *b=&o;
	printf("%u\n",&a);
		printf("%u\n",&b);
	printf("%u",*a+*b);
	return 0;
}
