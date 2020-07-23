#include<stdio.h>
int main()
{
int m,n,i,rabbits,chickens;

while(scanf("%d %d",&m,&n)!=EOF)
	{
		for(i=0;i<=m;i++)
		{
			rabbits=i;
			chickens=m-i;
		if(rabbits*2+chickens*4==n)
			break;		
		}
		
		if(i<=m)
		printf("%d %d",rabbits,chickens);
	}

return 0;
}
