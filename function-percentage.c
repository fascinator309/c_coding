#include<stdio.h>
int per(int  science,int math, int  sanskrit);

int main()
{int a;
int b;
int c;
printf("enter marks \n maths:");
scanf("%d",&a);
printf("science:");
scanf("%d",&b);
printf("sanskrit:");
scanf("%d",&c);

	printf("percentage:%d\n",per(a,b,c));
	return 0;
}

int per(int science,int math,int sanskrit){
	int percentage=(science+math +sanskrit)*100/300;
	return percentage;
}
