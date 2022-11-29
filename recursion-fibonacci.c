#include<stdio.h>

//  program for calculate nth element of fibonacci series
int fb(int n);

int main()
{
int a ;
printf("enter the nth no. for fibonacci :");
scanf("%d\n",&a);

printf("%dth element of fibonacci series :%d\n",a,fb(a));
	
	return 0;
}

int fb(int n){
	if(n==1){
		return 0;
	}
	if(n==2){
			return 1;
		}
		

return fb(n-2)+fb(n-1);

}
