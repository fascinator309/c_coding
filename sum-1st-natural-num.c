#include<stdio.h>

// sum of first n natural no. and also print no. in reverse order
int main()
{int a;
printf("enter the no.: ");
scanf("%d",&a);
int sum=0;
	// for(int i=1,j=a; i<=a && j>=1 ; i=i+1, j--)
	// {
		// sum =sum +i;
		// printf("%d\n",j);
	// }
	// printf("sum of first %d ",a);
	// printf( "natural is :%d\n",sum);

	//short coding
	for(int j=a; j>=1 ;  j--)
	{
		sum =sum +j;
		printf("%d\n",j);
	}
	printf("sum of first %d ",a); 
	printf( "natural is :%d\n",sum);

	
	return 0;
}
