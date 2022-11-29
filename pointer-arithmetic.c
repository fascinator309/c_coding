#include<stdio.h>
int main()
{
	int i =34 ;
	
	//int *a=&i;      //4 bytes
	//char *a=&i;     //1 bytes 
	float *a=&i;      //4 bytes 
	
	printf("%u\n", a);

	a++;
	printf("%u", a);
	return 0;

	
}
