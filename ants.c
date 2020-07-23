#include <stdio.h>
#include <string.h>
void CalcTime(double Length,   // ���ӵĳ��� 
              double *XPos,    // ���ϵ�λ��
			  int AntNum,      // ���ϵ�����
			  double Speed,    // ���ϵ��ٶ�
			  double *Min,     // ���ʱ��
			  double *Max)     // �ʱ�� 
{
	int i;
	double TotalTime=Length/Speed;
	double currentMax,currentMin;
	*Max = 0;
    *Min = 0;
	for(i=0;i<AntNum;i++)
	{
		currentMax=0;
		currentMin=0;
		if(XPos[i]>(Length/2))
		{
		    currentMax=XPos[i]/Speed;
		    currentMin=(Length-XPos[i])/Speed;
		}
		else
		{
		    currentMax=(Length-XPos[i])/Speed;
			currentMin=XPos[i]/Speed;
		}
		if(*Max < currentMax)
		    *Max=currentMax;
		if(*Min < currentMin)
		    *Min=currentMin; 
	}
}
int main()
{
	int i,t,n;
	double len,max,min,pos[1000000];
	scanf("%d",&t);
	while(t--)
	{
		max=0;
		min=0;
		memset(pos,0,sizeof(pos));
		scanf("%lf%d",&len,&n);
		for(i=0;i<n;i++)
		   scanf("%lf",&pos[i]);
		CalcTime(len,pos,n,1,&min,&max);
		printf("%.0lf %.0lf\n",min,max);
	}
	return 0;
}
