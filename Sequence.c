#include <stdio.h> 
#include <stdlib.h> 
#define MAX_NUM 1024 
int an[MAX_NUM + 10]; 
int cmp( const void * e1, const void * e2) 
{
	return * ((int *) e1) - * ((int *) e2);
} 
int main()
{
	int M,nMinLarger,nMinIdx;
	int m,n, k, i, j,kk;
	scanf("%d", & M);
	while(M--)
	{
		scanf("%d%d",&n,&k);
		for(i=1;i<=n;i++)                // 排列存放在a[1]...a[n] 
		    scanf("%d",&an[i]);
		an[0]=100000;                   // "哨兵"，确保an[0]比排列中所有的数都大 
		for(i=0;i<k;i++)                // 每次循环都找出下一个排列 
		{
			for(j=n;j>=1 && an[j-1]>an[j];j--);      // 从an开始，往左边找 
			if( j >= 1 )                             // 找到一个an[j]比左边的数大 
			{
				nMinLarger = an[j];
				nMinIdx = j;
				for(kk = j; kk <= n; kk ++)            // 找出从an[j]及其后最小的比an[j-1]大的元素，并记住下标 
				    if ( nMinLarger > an[kk] && an[kk] > an[j-1])
					{
						nMinLarger = an[kk];
						nMinIdx = kk;
					}
					an[nMinIdx] = an[j-1];     // 交换位置 
					an[j-1] = nMinLarger;
					qsort( an + j, n - j + 1 , sizeof(int), cmp);   //排序 
			}
			else      // an里的排列已经是降序了，那么下一个排列就是1,2,3...n 
			   for( j = 1; j <= n; j ++ )
			       an[j] = j;
		}
		for( j = 1; j <= n; j ++ )
		    printf("%d ", an[j]);
		printf("\n");
	}
	return 0;
}

