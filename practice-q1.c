#include<stdio.h>

// power of pointers -- return more then two value from a single function
// Q. use a single fn and calculate sum and average of two no,

void sumavg(int a, int b,int *sum,float *avg){
	*sum=a+b;
	*avg=(float)(*sum)/2;  //(float) reason-- because two integer give ans
	// integer -- to need full decimal answer use this
}

int main()
{int a=3,b=6,sum ;
float avg;
sumavg(a,b,&sum,&avg);
printf("sum=%d\n",sum);
printf("avg=%f\n",avg);


	
	return 0;
}
