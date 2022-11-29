#include<stdio.h>
int main()
{
	int i;
	int *a= &i;
		int *b= &i;
     printf("%u\n%u",a,b);        //then there memory location is same 
	return 0;
}
