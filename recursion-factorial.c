#include<stdio.h>

int factorial(int n);

int main()
{
int a;
printf("enter the no. for factorial:");
scanf("%d",&a);
	printf("factoial :%d\n", factorial(a));
	return 0;
}

int factorial(int n){
if(n==0){
	return 1;
}
   else{ 
	return n * factorial(n-1);
	}
}
