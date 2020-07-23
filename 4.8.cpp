#include <stdio.h>

int FibFun(int n)

{

     if(n==0)

         return 0;

     if(n==1 || n==2)

          return 1;

      return FibFun(n-1)+FibFun(n-2);

}

int main()

{

    int m,n,tmp,i,sum=0;

    scanf("%d%d",&m,&n);

    if(m>n)

    {

          tmp=m;

          m=n;

          n=tmp;

    }

    for(i=m;i<=n;i++)

       sum+=FibFun(i);

    printf("%d\n",sum);
    return 0;

}
