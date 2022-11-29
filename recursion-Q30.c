#include<stdio.h>

int sum(int n);

int main()
{

int a;						
printf("enter the no.:");			
scanf("%d\n",&a);


	printf("answer:%d\n", sum(a));
	return 0;
}

int sum(int n){
if (n==1){
	return 1;
}

return n+sum(n-1);
}




