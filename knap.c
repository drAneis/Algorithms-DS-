#include<stdio.h>
#include<string.h>
int w[1005];
int knap(int s,int i)
{
    if(s==0)
		return 1;                       // 正好
    if(s<0 || s>0 &&i==0)               // s<0，第i件物品装不下，该方案无效；s>0 && i==0，已经没有物品了，背包还有空余，该方案也不行 
		return 0;
    if(knap(s-w[i],i-1))
		return knap(s-w[i],i-1);        // 第i件装得下，装入背包，背包余重减少wi，并选择下一个 
    else
		return knap(s,i-1);             // 第i件装不下，舍去，并选择下一个
}
int main()
{
	int i,weight,n;
	while(scanf("%d%d",&weight,&n)!=EOF)
	{
		memset(w,0,sizeof(w));
		for(i=1;i<=n;i++)
			scanf("%d",&w[i]);
		if(knap(weight,n)==1)           // 正好。问题有解
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

