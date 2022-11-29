#include<stdio.h>
int main()
{int a,b;

	printf("enter the range...\n starting no.:");
	scanf("%d",&a);
	printf("ending no.:");
	scanf("%d",&b);
	
		printf("prime no.s between %d and %d are:\n ",a,b);
		
	for(int i=a;i<=b ; i++){

	if(i==1){
		continue;
	}
		
		if(i==2 || i==3 || i==5 ){
		                printf("%d\n",i);
		        }else if(i%2!=0 && i%3!=0 && i%5!=0){
		                        printf("%d\n",i);
		                }
	}
	return 0;
}

