#include<stdio.h>
#include<string.h>
int w[1005];
int knap(int s,int i)
{
    if(s==0)
		return 1;                       // ����
    if(s<0 || s>0 &&i==0)               // s<0����i����Ʒװ���£��÷�����Ч��s>0 && i==0���Ѿ�û����Ʒ�ˣ��������п��࣬�÷���Ҳ���� 
		return 0;
    if(knap(s-w[i],i-1))
		return knap(s-w[i],i-1);        // ��i��װ���£�װ�뱳�����������ؼ���wi����ѡ����һ�� 
    else
		return knap(s,i-1);             // ��i��װ���£���ȥ����ѡ����һ��
}
int main()
{
	int i,weight,n;
	while(scanf("%d%d",&weight,&n)!=EOF)
	{
		memset(w,0,sizeof(w));
		for(i=1;i<=n;i++)
			scanf("%d",&w[i]);
		if(knap(weight,n)==1)           // ���á������н�
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

