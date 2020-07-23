#include<stdio.h>
int main()
{
 int L,M,i,a,b,s[10001],count=0;
 scanf("%d %d",&L,&M);
 for(i=0;i<=L;i++)
  s[i]=1;
 while(M--)
 {
  scanf("%d %d",&a,&b);
  for(i=a;i<=b;i++)
  {
   s[i]=0;
  }
 }
 for(i=0;i<=L;i++)
  if(s[i]==1)
  {
   count++;
  }
  printf("%d",count);
  return 0;
}
