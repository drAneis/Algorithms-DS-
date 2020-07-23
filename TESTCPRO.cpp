#include<stdio.h>
int main()
{   int a[100][100],max,x,y,n,m,i,j;
    while(scanf("%d%d",&m,&n)!=-1)
    {
    input(a,m,n);
    max=a[0][0];
    for(i=0;i<m;i++)
    {   for(j=0;j<n;j++)
            {   if(a[i][j]>=max)
                {   x=i;
                    y=j;
                 }
               max=a[x][y];// warning position
            }
    }
        printf("%d %d %d",x+1,y+1,a[x][y]);
    }


    return 0;
} 
