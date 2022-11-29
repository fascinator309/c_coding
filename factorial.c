#include<stdio.h>
int main()

// using long because factorial value increases very fast..  

{long double a;
printf("enter the no.");
scanf("%LF",&a);
long double f=1;
	for(long double i=1;i<=a; i++ ){
		f *=i;
	}
	printf("factorial is:%LF\n",f);
	return 0;
}
