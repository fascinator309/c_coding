#include<stdio.h>
int main()
{
// keep taking no. from user until enter a odd no,
int a=0;
	// do while loop
	// do{
	 // printf("enter the no.:");
		// scanf("%d",&a);
	// }while(a%2==0);
	


	// for loop
	// for(int i=1; a%2==0; i=i+1){
		// printf("enter the no.:");
		 // scanf("%d",&a);

//  while loop
		// while(a%2==0){
			// printf("enter the no.");
			// scanf("%d",&a);
		// }

// use of break
		
      do{
       printf("enter the no.:");
       scanf("%d",&a);
       if(a%2 !=0){
       	break;
       }
       
     }while(1);

	
	return 0;
}
