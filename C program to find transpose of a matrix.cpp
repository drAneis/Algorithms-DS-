/**
 * C program to find transpose of a matrix
 */
 #include <stdio.h>
 int main()
 	
 {
/**
 * C program to find transpose of a matrix
 */ 
 int a[100][100];
 int i,n,j;
 
 scanf("%d",&n);
 for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(j==n-1)
            {
                printf("%d",a[j][i]);
                printf("\n");
            }
            else
                printf("%d ",a[j][i]);
        }
    }

 		return 0;
 	
 } 
