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
int Length(int x[])         // 求大数有多少位
{
	int i;
	for(i=MAX-1;i>=0;i--)   // 找到数组的后面第一个不是 0 的数
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
int Substract(int p1[], int p2[],int nlen1,int nlen2)   // 长度为 nLen1 的大整数p1 减去长度为nLen2 的大整数p2，结果放在p1 里，
{                                                       // 返回值代表结果的长度，如不够减返回-1，正好减完返回 0
    int i;
	if(nlen1<nlen2)                    // 如果p1长度 < p2长度，说明不够减，返回-1
		return -1;
    else if(nlen1==nlen2)              // 如果p1、p2长度相同，则比较每个元素
    {
        for(i=nlen1-1;i>=0;i--) 
        {
            if(p1[i]>p2[i])            // 如果p1[i]>p2[i]，说明够减，跳出进行减操作。
				break;
            else if(p1[i]<p2[i])       // 如果p1[i]<p2[i]，说明不够减，返回-1
				return -1;
        }
    }
	for(i=0;i<nlen1;i++)               // p1长度 > p2长度，或者长度相等，但p1 > p2，说明够减，都进行减操作。
    { 
        p1[i]-=p2[i]; 
        if(p1[i]<0)                    // 看是否要借位
        {
            p1[i]+=10;
            p1[i+1]--;                 // 借位
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
		
		Input(a);                            // 如输入：7546
		Input(b);                            // 如输入：23
		
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
                b[i]=b[i-nTimes];           // 朝高位移动   b数组：原来是23，移动后是2323
            while(i>=0)                     // 低位补0      b数组低位补零后，2300
			{
                b[i]=0;
				i--;
			}
            nlen2=nlen1;                   // nlen2 = 4，   b数组长度和nlen1一样了，a是7546，b是2300
        }
        for(j=0;j<=nTimes;j++)             // nTimes=2，循环3次，外循环说明需要减3个级别，即百位，十位，个位 
        {
            while((nTmp=Substract(a,b+j,nlen1,nlen2-j))>=0)  // 一直减到不够减为止，先减去若干个 b×(10 的 nTimes 次方)，不够减了，再减去若干个b×(10 的nTimes-1次方)，......
            {                                                // 外循环第一圈，内循环第一圈，减100，第二圈再减100，第三圈再减100，外循环第二圈，内循环第一圈...
                nlen1=nTmp;
                c[nTimes-j]++;          // 每成功减一次，则将商的相应位加1
            }
        }
		Print(c);
	}
	return 0;
}

