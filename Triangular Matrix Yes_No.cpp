/*Triangle Matrix YeS_NO*/
#include<stdio.h>
int main()
{
    int i, triangle, n, j;
    int a[6][6];
  
    scanf("%d", &n);

 
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
		 {
            scanf("%d", &triangle);
            a[i][j] = triangle;
        }
    triangle = 1;
    for(i=1;i<n;i++)
        for(j=0;j<i;j++)
            if(a[i][j] != 0)
                triangle = 0;
    if (triangle)
	 {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
