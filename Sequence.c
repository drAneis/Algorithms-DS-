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
		for(i=1;i<=n;i++)                // ���д����a[1]...a[n] 
		    scanf("%d",&an[i]);
		an[0]=100000;                   // "�ڱ�"��ȷ��an[0]�����������е������� 
		for(i=0;i<k;i++)                // ÿ��ѭ�����ҳ���һ������ 
		{
			for(j=n;j>=1 && an[j-1]>an[j];j--);      // ��an��ʼ��������� 
			if( j >= 1 )                             // �ҵ�һ��an[j]����ߵ����� 
			{
				nMinLarger = an[j];
				nMinIdx = j;
				for(kk = j; kk <= n; kk ++)            // �ҳ���an[j]�������С�ı�an[j-1]���Ԫ�أ�����ס�±� 
				    if ( nMinLarger > an[kk] && an[kk] > an[j-1])
					{
						nMinLarger = an[kk];
						nMinIdx = kk;
					}
					an[nMinIdx] = an[j-1];     // ����λ�� 
					an[j-1] = nMinLarger;
					qsort( an + j, n - j + 1 , sizeof(int), cmp);   //���� 
			}
			else      // an��������Ѿ��ǽ����ˣ���ô��һ�����о���1,2,3...n 
			   for( j = 1; j <= n; j ++ )
			       an[j] = j;
		}
		for( j = 1; j <= n; j ++ )
		    printf("%d ", an[j]);
		printf("\n");
	}
	return 0;
}

