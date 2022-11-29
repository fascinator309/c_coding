#include<stdio.h>
#include<math.h>
int main()
{
int a;
printf("enter the percentage :");
scanf("%d",&a);
if(a>=0 && a<33)
{
	printf("fail \n");
}
else if(a>=33 && a<40)
{
	printf("just pass\n");
}
else if(a>=40 && a<=100)
printf("pass\n");
else
{
printf("not input\n");
	
}
}
