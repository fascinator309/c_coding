#include<stdio.h>

void printhw(int a);

int main()
{
	printhw(5);
	return 0;
}

// recursive function 

void printhw(int a){
	if(a==0){       //BASE CASE -- NEVER FORGOT 
		return;		//return only because here is VOID, not using return 0
	}
	printf("hello world\n");
	printhw(a-1);
}

