/*The sum of 3*3 matrix diagonal elements*/
#include<stdio.h>

int main()
{
  int i,j,a[3][3],sum=0;

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<3;i++)
        sum+=a[i][i];
    printf("%d\n",sum);
    
    return 0;
} 

