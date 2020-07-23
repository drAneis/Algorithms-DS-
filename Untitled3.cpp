#include<stdio.h>

int main()
   {
   int n,a[100][3]; 
    float x; int i=0;
    
    scanf("%d",&n);
	 while(n!=0)
	  { a[i][0]=a[i][1]=a[i][2]=0;
	  	for(int j=0;j<n;j++) 
	  		{ scanf("%f",&x); 
	  			if(x<0) a[i][0]++;
	   			else if(x==0) a[i][1]++; 
	   else a[i][2]++; 
	   		} 
	scanf("%d",&n); i++; 
	    }
	    for(int j=0;j<i;j++) 
		 printf("%d %d %d\n",a[j][0],a[j][1],a[j][2]); 
		 
	 return 0;
	 } 


