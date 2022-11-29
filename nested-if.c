#include<stdio.h>
#include<math.h>
int main()
{
int a;
printf("enter the no.:");
scanf("%d",&a);
if(a>0)
{
printf("positive\n");
if(a%2==0)
{
	printf("even\n");
}
else
{
printf ("odd\n");
}
}
else
printf("negative\n");
	
}
