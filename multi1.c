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
	for(i=0;i<MAX;i++)     // ���ʹ��memset���������ⳬʱ
		x[i]=0;
    for(i=0;i<len;i++)
        x[i]=s[len-i-1]-'0';
	return len;
}
void Print(int x[])
{
    int i;
	for(i=MAX-1;i>=0;i--)   // �ҵ�����ĺ����һ������ 0 ����
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
    for(i=0;i<nb;i++)          // ��ѡ����y����һλ��ȥ��x�ĸ�λ 
	{
		for(j=0;j<na;j++)      // ������i, jλ��ˣ��ۼӵ�����ĵ�i+jλ
			z[i+j]+=y[i]*x[j];
	}
	for(i=0;i<MAX * 2;i++)     	// �����ѭ��ͳһ�����λ����
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

