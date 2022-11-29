#include<stdio.h>
void swap(int x, int y);
void _swap(int *x, int *y);

int main()
{
int a=3 ; int b=5;
swap(a,b);
		printf("a=%d \nb=%d\n", a,b);


_swap(&a,&b);
		printf("a=%d \nb=%d\n", a,b);

	return 0;
}

// call by value 
void swap(int x , int y){
	int t=x;
	 x=y;
	 y=t;
	printf("a=%d \nb=%d\n", x,y);
}

// call by reference
void _swap(int *x, int *y){
	int t=*x;
	*x=*y;
	*y=t;
		printf("a=%d \nb=%d\n", *x,*y);

}





