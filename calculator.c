#include<stdio.h>

#include<math.h>

int main()
{

float num1;
char op;
float num2;
printf("\t\t\t\tCALCULATOR\n");
printf("\t\t\t\t\t\t\tcreated by TARUN MALVIYA\n");
printf("MENU:\n");
printf("press + to doing addition\n");
printf("press - to doing subtraction\n");
printf("press * to doing multiplication\n");
printf("press / to doing division\n");
// printf("press '%' to calculating the percentage\n");
printf("press 1 to find square root\n");
printf("press 2 to squaring the number\n\n");
printf("enter the operation:");
scanf("%c",&op);

switch(op)
{
case'+':
printf("you are doing addtion:\n\n");
printf("enter the first numder:");
scanf("%f",&num1);
printf("enter the second number:");
scanf("%f",&num2);
float result=num1+num2;
printf("\nsum of two numbers is:%f",result);
break;

case'-':
printf("you are doing sudtraction\n\n");
printf("enter the first number:");
scanf("%f",&num1);
printf("enter the second number:");
scanf("%f",&num2);
result=num1-num2;
printf("subtraction between two numbers is:%f",result);
break;

case'*':
printf("you are doing multiplcation\n\n");
printf("enter the first number:");
scanf("%f",&num1);
printf("enter the second number:");
scanf("%f",&num2);
result=num1*num2;
printf("the product of two numbers is:%f",result);
break;

case'/':
printf("you are doing divide:\n\n");
printf("enter the first number:");
scanf("%f",&num1);
printf("enter the second number:");
scanf("%f",&num2);
result=num1/num2;
printf("divide between two number is:%f",result);
break;

case'%':
printf("you are calculating the percentage:\n\n");
printf("enter the number:");
scanf("%f",&num1);
printf("enter the total number:");
scanf("%f",&num2);
result=num1/num2*100;
// printf("you are getting the percenyage:%f %",result);
break;
case'1':
printf("enter the number to find the square root:");
scanf("%f",&num1);
result=sqrt(num1);
printf("square root of number is:%f",result);
break;

case'2':
printf("enter the number to squaring:");
scanf("%f",&num1);
result=num1*num1;
printf("the square of the number is:%f",result);
break;

default:
printf("your operation is invaild in this program");
break;
}


return 0;
}














