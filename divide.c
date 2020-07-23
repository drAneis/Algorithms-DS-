#include<stdio.h>
#include<string.h>

#define MAX 500

void Input(int x[])
{
    int i,len;
    char s[MAX];
	memset(s,0,sizeof(s));
	memset(x,0,sizeof(x));
    scanf("%s",s);
    len=strlen(s);
    for(i=0;i<len;i++)
        x[i]=s[len-i-1]-'0';
}
int Length(int x[])         // ������ж���λ
{
	int i;
	for(i=MAX-1;i>=0;i--)   // �ҵ�����ĺ����һ������ 0 ����
        if(x[i]!=0)
			return i+1;
	return 0;
}
void Print(int x[])
{
    int i,n;
	n=Length(x);
	if(n>0)
	{
		for(i=n-1;i>=0;i--)
			printf("%d",x[i]);
	}
	else
		printf("0");
	printf("\n");
}
int Substract(int p1[], int p2[],int nlen1,int nlen2)   // ����Ϊ nLen1 �Ĵ�����p1 ��ȥ����ΪnLen2 �Ĵ�����p2���������p1 �
{                                                       // ����ֵ�������ĳ��ȣ��粻��������-1�����ü��귵�� 0
    int i;
	if(nlen1<nlen2)                    // ���p1���� < p2���ȣ�˵��������������-1
		return -1;
    else if(nlen1==nlen2)              // ���p1��p2������ͬ����Ƚ�ÿ��Ԫ��
    {
        for(i=nlen1-1;i>=0;i--) 
        {
            if(p1[i]>p2[i])            // ���p1[i]>p2[i]��˵���������������м�������
				break;
            else if(p1[i]<p2[i])       // ���p1[i]<p2[i]��˵��������������-1
				return -1;
        }
    }
	for(i=0;i<nlen1;i++)               // p1���� > p2���ȣ����߳�����ȣ���p1 > p2��˵�������������м�������
    { 
        p1[i]-=p2[i]; 
        if(p1[i]<0)                    // ���Ƿ�Ҫ��λ
        {
            p1[i]+=10;
            p1[i+1]--;                 // ��λ
        }
    }
	return Length(p1);
}
int main()
{
	int a[MAX],b[MAX],c[MAX];
	int i,j,n,nlen1,nlen2,nTimes,nTmp;
	scanf("%d",&n);
	while(n--)
	{
		memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        memset(c,0,sizeof(c));
		
		Input(a);                            // �����룺7546
		Input(b);                            // �����룺23
		
		nlen1=Length(a);                     // nlen1=4
		nlen2=Length(b);                     // nlen2=2
		
		if(nlen1<nlen2)
        {
            printf("0\n");
            continue;
        }
		nTimes=nlen1-nlen2;                 // nTimes = 4-2 = 2
        if(nTimes>0)
        {
            for(i=nlen1-1;i>=nTimes;i--)
                b[i]=b[i-nTimes];           // ����λ�ƶ�   b���飺ԭ����23���ƶ�����2323
            while(i>=0)                     // ��λ��0      b�����λ�����2300
			{
                b[i]=0;
				i--;
			}
            nlen2=nlen1;                   // nlen2 = 4��   b���鳤�Ⱥ�nlen1һ���ˣ�a��7546��b��2300
        }
        for(j=0;j<=nTimes;j++)             // nTimes=2��ѭ��3�Σ���ѭ��˵����Ҫ��3�����𣬼���λ��ʮλ����λ 
        {
            while((nTmp=Substract(a,b+j,nlen1,nlen2-j))>=0)  // һֱ����������Ϊֹ���ȼ�ȥ���ɸ� b��(10 �� nTimes �η�)���������ˣ��ټ�ȥ���ɸ�b��(10 ��nTimes-1�η�)��......
            {                                                // ��ѭ����һȦ����ѭ����һȦ����100���ڶ�Ȧ�ټ�100������Ȧ�ټ�100����ѭ���ڶ�Ȧ����ѭ����һȦ...
                nlen1=nTmp;
                c[nTimes-j]++;          // ÿ�ɹ���һ�Σ����̵���Ӧλ��1
            }
        }
		Print(c);
	}
	return 0;
}

