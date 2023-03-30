// fibonacci series
#include<stdio.h>

void fibo(int);

void main(){
    int limit;
    printf("enter limit:");
    scanf("%d",&limit);
    printf("fibonacci series:\n");
    fibo(limit);
   
}

void fibo(int limit){
    int a=0,b=1;
    printf("%d",a);
    for(int i=1;i<=limit;i++){
        printf(" %d",b);
        b+=a;
        a=b-a;
        
    }
   
}