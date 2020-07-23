#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,k,n;
	int a[60];
	for(i=0;i<60;i++)
	a[i]=0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		
		scanf("%d", &k);
		a[k]++;
	}
    for(i=0;i<60;i++)
	{  if(a[i]!=0)
	
		printf("%d : %d",i, a[i]);
		printf("\n");
	}
	return 0;
}
