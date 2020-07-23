#include <stdio.h>
int main()
{
    int n,i,sum=1;
   while( scanf("%d", &n)!=00)
   	{
   	for (i = 1; i <= n;i++)
   		 {
        if (i % 2 != 0)
            sum = i * sum;    
 
    	}
    		printf("%d", sum);
   	
   	}
    
 return 0;
}
