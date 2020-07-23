#include <stdio.h>
 int main() 
 { 
 
 int integer,reverse,hundred,ten,unit;
  scanf("%d",&integer); 
     hundred=integer%10; 
     ten=(integer/10)%10; 
	 unit=integer/100; 

reverse=hundred*100+ten*10+unit; 
printf("%3d\n",reverse);

   return 0;
   
    }
    
    
    
    #include<stdio.h>
 int main()
 { 
 int n,n_space,inverse[5];
 int digits = 0;
 scanf("%5d",&n);
 	
    while(n != 0)
    {
        n /= 10;
        ++digits;
    }
 printf("%d\n",digits);  
 
 for (n_space=digits;n_space>=0;n_space--)
            printf("%d",inverse[n_space]);
 	
 	return 0;
 	
 }
 


