#include<stdio.h>
  #include<math.h>
  int main()
  {
  int a=2;
  int b=5;
   
 char op;
 printf("enter your operation");
 scanf("%c",&op);
 
 switch(op)
 {
 case '+': printf("answer %d",b+a);
 break;
  
    case '-': printf("answer %d",b-a);
    break;
    }
 }
