#include<stdio.h>
int main()
{
	int marks[5];
	for(int i=0;i<=4;i++){
	printf("marks of %d student :",i+1);
	scanf("%d",&marks[i]);
	}
	printf("marks of student are :%d %d %d %d %d \n",marks[0],marks[1],marks[2],marks[3],marks[4]);
	return 0;
}
