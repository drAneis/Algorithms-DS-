/*Requires the sum of the lower triangular elements of the matrix*/
#include<stdio.h>    
int main() 
{ 
 
 int i,j,a[10][10],n,sum=0;
 
  scanf("%d",&n);
      for (i=0;i<n;i++)
	 	 {
	  	     for (j=0;j<n;j++)
			   {
			   scanf("%d",&a[i][j]);	
			   }

	  	}
	  	 for (i=0;i<n;i++)
		   {
		   	for (j=0;j<=i;j++)
			   {
			   	  sum+=a[i][j];
			   	
			   }
		   	
		   }
        printf("%d",sum);
      
        return 0; 
} 

