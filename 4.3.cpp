#include<stdio.h>
 int main()
  {  
    int a[10],average=0,sum=0; 
    int i,j=0;
	  
for(i=0;i<10;i++)   
      {     
   scanf("%d",&a[i]);   
	sum=sum+a[i]; 
	   } 
 average=sum/10;  
for(i=0;i<10;i++)    
	{         
	if(a[i]>average)  
		 j++;     }    
							 
	printf("%d",j); 
	
return 0;	
	} 

