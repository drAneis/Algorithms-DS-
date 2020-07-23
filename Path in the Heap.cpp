#define maxn 1001
#define minh -10001
#include <iostream>
#include <stdio.h>


int H[maxn];
int Size;
void Creat()
{
    Size=0;
    H[0]=minh;
}

void Insert(int X)
{
    int i;
    if(Size>maxn) return;
    for(i=++Size;H[i/2]>X;i/=2)
    {
        H[i]=H[i/2];
    }
    H[i]=X;
}
int main()
{
    int n,m,x,i,j;
    scanf("%d%d",&n,&m);
    Creat();
    for(i=0;i<n;i++)
    {
        //int x;
         scanf("%d",&x);
        
        Insert(x);
    }
    for(i=0;i<m;i++)
    {
        
         scanf("%d",&j);
        //cout<<H[j];
        while(j>=1)
        {
            
            printf("%d",H[j]);
            if(j!=1)    printf(" ");
            j/=2;
        }
      printf("\n");
    }


    return 0;}
