#include<stdio.h>
int main()
{
	int a;
	printf("enter the no.:");
	scanf("%d",&a);

	
	if(a==2 || a==3 || a==5 ){
		printf("%d is a prime no.",a);
	}else if(a%2!=0 && a%3!=0 && a%5!=0){
			printf("%d is a prime no.",a);
		} 
	else{
		printf("%d is not a prime no.",a);
	}
	return 0;
}
