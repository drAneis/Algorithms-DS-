#include<stdio.h>

int maxSum(int a[], int n);

int main()
	{
	 int b;
	printf("Please input the number of elements in the Array:\n");
    scanf("%d\n",&b);
    
    if (b>100000){
    	return 0;
	}
	else {
		
		int array[b];
	for(int i=0; i<b; i++)	{
			scanf("%d",&array[i]);

		}
	int x= maxSum(array, b);
		printf("The Maximum SubArray Sum is : %d\n", x);
	}
  
		
	
  


	
	
	return 0;
	
	}


int maxSum(int a[], int n)
{
   int maxSum = 0,sum = 0;
   int i;
   for(i = 0;i<n;i++)
   {
     sum = sum + a[i];
     if(sum < 0)
        sum = 0;
     else if(sum > maxSum)
        maxSum = sum;
   }
   return maxSum;
}
