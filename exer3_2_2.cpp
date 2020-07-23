#include <stdio.h>
 int main() 
 { int n; scanf("%d",&n);
  int i; int s=0;
   int f=1;
    for(i=1;i<=n;i++) 
	{ f*=i; s+=f; } 
	printf("%d\n",s); 
	
	return 0; 
	} 
