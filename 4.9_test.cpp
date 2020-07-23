#include<stdio.h>
int main()
{
	
int N;
int a[1000];
int i, num=0, score;
scanf("%d",&N);
while(N!=0)
{
	for(i=0;i<N;i++)
	{
	scanf("%d",&a[i]);	
	}
	scanf("%d",&score);
	for(i=0;i<N;i++)
	{
	if(score==a[i])
	{num++;
		
		}	
		
	}
	printf("%d\n",num);
	num=0;i=0;
	scanf("%d",&N);
	
	
}
return 0;

}
