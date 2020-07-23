#include<stdio.h>
#include<string.h>

#define MAX 500

int na,nb;

int Input(int x[])
{
    int i,len;
    char s[MAX];
    gets(s);
    len=strlen(s);
	for(i=0;i<MAX;i++)     // 最好使用memset函数，以免超时
		x[i]=0;
    for(i=0;i<len;i++)
        x[i]=s[len-i-1]-'0';
	return len;
}
void Print(int x[])
{
    int i;
	for(i=MAX-1;i>=0;i--)   // 找到数组的后面第一个不是 0 的数
        if(x[i]!=0)
             break;
    while(i>=0)
	{
        printf("%d",x[i]);
		i--;
	}
    printf("\n");
}
void Product(int x[], int y[], int z[])
{
	int i,j;
    for(i=0;i<nb;i++)          // 用选定的y的那一位，去乘x的各位 
	{
		for(j=0;j<na;j++)      // 两数第i, j位相乘，累加到结果的第i+j位
			z[i+j]+=y[i]*x[j];
	}
	for(i=0;i<MAX * 2;i++)     	// 下面的循环统一处理进位问题
	{
		if(z[i]>=10)
		{
			z[i+1]+=z[i]/10;
			z[i]%=10;
		}
	}
}
int main()
{
	int i,a[MAX],b[MAX],c[2*MAX];
	for(i=0;i<MAX*2;i++)
		c[i]=0;
	na=Input(a);
	nb=Input(b);
	Product(a,b,c);
	Print(c);
	return 0;
}

