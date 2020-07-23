#include<stdio.h>
#include<string.h>
#define MAX 500
void Input(int x[])
{
    int i,len;
    char s[MAX]={'\0'};
    scanf("%s",s);
    len=strlen(s);
    memset(x,0,sizeof(x));
    for(i=0;i<len;i++)
        x[i]=s[len-i-1]-'0';
}

void Print(int x[])
{
    int i;
    for(i=MAX-1;i>0;i--)
        if(x[i]!=0)
		break;
    while(i>=0)
	{
        printf("%d",x[i]);
		i--;
	}
    printf("\n");
}
void Add(int a[], int b[], int c[])
{
    int i;
    for (i=0;i<MAX;i++)
        c[i]=a[i]+b[i];
    for (i=0;i<MAX-1;i++)
        if(c[i]>=10)
        {
            c[i+1]+=c[i]/10;
            c[i]%=10;
        }
}
int main()
{
	int a[MAX]={0},b[MAX]={0},c[MAX]={0};
	Input(a);
	Input(b);
	Add(a,b,c);
	Print(c);
	return 0;
}

