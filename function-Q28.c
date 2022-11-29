
//Q28 if indian print namaste and if french print bonjour 

#include<stdio.h>

void printnamaste ();
void printbonjour();
char a;

int main()
{

printf("for indian - i    for french - f\nenter:");
scanf("%c", &a);

if(a=='i'){
	printnamaste();
}else if(a=='f'){
	printbonjour();
}
	
	return 0;
}


void printnamaste (){
	printf("NAMASTE!\n");
}
void printbonjour(){
	printf("BONJOUR!\n");
}
