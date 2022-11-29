#include<stdio.h>
int main()
{
int a;
	printf("enter the no. for table:");
	scanf("%d",&a);
	for(int i=1; i<=10 ; i=i+1)
	{
	printf("%d ",a); 
	 printf("* %d",i);
	printf(" = ");
	int b;
		printf("%d\n",b=a*i);

	}
	return 0;
}
