#include<stdio.h>
/*Program to Find the Negatives elements of an Array*/

int main()
{
	int a[100];
	int i, N;
	
	printf("Enter Size of the array:");//This step is important for the loop
		scanf("%d", &N);
	printf("Enter the array:");
	
		for(i=0;i<N;i++)   //The number of Arrays determine the repetion of the loop
		{
			scanf("%d",&a[i]);	
		}
		for(i=0;i<N;i++) //The number of Arrays determine the repetion of the loop
		{
			if(a[i]<0)
			{
			printf("%d",a[i]);	
			}
		   		
	}
	
	return 0;

}
