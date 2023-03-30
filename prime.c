#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==0||n==1){
         printf("not prime");
            return 0;
    }
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            printf("not prime");
            return 0;
        }
         
    }

    printf("prime\n");

}