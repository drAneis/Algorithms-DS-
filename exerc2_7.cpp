#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d",&x);
	
	if (x<1)
	{  y=x;
	printf("%d\n",y);
		
	}
	if((1<=x)&&x<10)
	{
		y=(2*x-1);
		printf("%d\n",y);
	}
	if(x>=10)
	{
		y= (3*x-11);
		printf("%d\n",y);
	}
	
	return 0;
	
}
