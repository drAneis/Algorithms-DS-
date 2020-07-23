#include<stdio.h>
/*Program to print the inverse of an Array*/
int main()
{
int a[100];
int i,N;

printf("Enter the number of Array:");
    scanf("%d",&N);
 printf("Enter the Array:");//This step is important for the loop
 
  for(i=0;i<N;i++)
  {
   scanf("%d",&a[i]);	
  	
  }
  for(i=N-1;i>=0;i--)//Lembra dessa for Loop pARA TODOS ALGORITMOS DE INVERSÃO
  {
  	printf("%d ", a[i]);
  }
    	
	return 0;
}
