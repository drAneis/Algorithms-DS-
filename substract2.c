#include<stdio.h>
#include<string.h>

#define MAX 500

int Input(int x[])
{
    int i,len;
    char s[MAX];
    scanf("%s",s);
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
void Substract(int a[], int b[], int c[])
{
    int i;
    for(i=0;i<MAX;i++)
        c[i]=a[i]-b[i];
    for(i=0;i<MAX-1;i++)
    {
		if(c[i]<0)                    // 看是否要借位
		{
			c[i]+=10;
			c[i+1]--;                 // 借位
		}
	}
}
int Cmp(int x[],int y[])
{
    int i,j,flag=1;
    for(i=MAX-1;i>0;i--)   // 找到数组的后面第一个不是 0 的数
        if(x[i]!=0)
			break;
	for(j=i;j>=0;j--)
	{
		if(x[j]>y[j])
			return 1;
		else if(x[j]<y[j])
			return 0;
	}
	return flag;
}
int main()
{
	int a[MAX],b[MAX],c[MAX],na,nb;
	na=Input(a);
	nb=Input(b);
	if(na>nb)
		Substract(a,b,c);
	else if(na<nb)
	{
		printf("-");
		Substract(b,a,c);
	}
	else
	{
		if(Cmp(a,b))
			Substract(a,b,c);
		else
		{
			printf("-");
			Substract(b,a,c);
		}
	}
	Print(c);
	return 0;
}

