#include<stdio.h>
int main()

{
int n, a[100], i, temp, min, k;

	while(scanf("%d",&n)!=EOF)
		{
			if(n==0) return 0;
			for(i=0;i<n;i++)
		{
	scanf("%d",&a[i]);
			if(i==0)
			{
					min=a[i];
					k=0;
			}
			else
			{
				
				if(a[i]<min)
				{
				min=a[i];
				k=i;
				}

			}	
		}		
			temp=a[0];
			a[0]=a[k];
			a[k]=temp;
	for(i=0;i<n-1;i++)
		printf("%d ",a[i]);
		printf("%d\n",a[i]);
	}
return 0;
} 
