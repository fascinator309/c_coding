#include<stdio.h>
int main()
{ int i=1;
  int a; 
	printf("enter how many times to print: ");
	scanf("%d",&a);
	while(i<=a){
	printf("%d",i);
		printf(" hello world\n");
		i=i+1;
	}
	printf("printed: ");
	printf("%d ",a);
	printf("times");
	
	
	
	
	return 0;
}
