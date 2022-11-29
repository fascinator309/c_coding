#include<stdio.h>

int main()
{
        int a=4;
    int *b;
    int **c;
    b=&a;
    c=&b;
    printf("%d\n",a);
        printf("%d\n",**c);
        return 0;
}
