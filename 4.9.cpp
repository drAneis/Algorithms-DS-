#include <stdio.h>
int main()
{
	int c[1000] ;
	int i, n, m, num;
	
	while(scanf("%d", &n)==1)
		{ 
		if(n==0)
		
		 break;	
	
		
	    	 num=0;
		
		for(i=1;i<=n;i++)
			{
			scanf("%d", &c[i]);	
			}
			scanf("%d", &m);
		for(i=1;i<=n;i++)
			{
			if(c[i]==m)
			num++;	
			
			}
			

		}
			printf("%d\n",num);	
		
	return 0;			
	 } 
 
