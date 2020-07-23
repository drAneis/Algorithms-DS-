#include<stdio.h>
 int main()
 
 {
 int num_a,num_b,sum,judge;
     scanf("%d,%d",&num_a,&num_b);
       judge=(num_a+num_b);
     scanf("%d",&sum);
         
     if (judge==sum)
	 {
	 	printf("right\n");
	 }
	 else
	 {
	 	printf("error\n");
	 }
 	 return 0;	
 }
