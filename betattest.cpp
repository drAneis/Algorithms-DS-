#include <stdio.h>
int main()
{
	int i=0,n=0,sum=0,m=0;
	while(scanf("%d",&n) && n)
	{
		for(sum=0,i=0;i<=n-1;i++)
		{
			scanf("%d",&m);
			sum+=m;
		}
		printf("%d\n",sum);
	}
	return 0;
}

