#include<stdio.h>
#include<math.h>
int main()
{
char ch;
	printf("enter the alphabet:\n");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
	{printf("lower case alphabet\n");
	}
	else if(ch>='A' && ch<='Z')
	{
	printf("upper case alphabet\n");}
	
	
	return 0;
}
