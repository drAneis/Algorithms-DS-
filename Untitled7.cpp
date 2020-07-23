#include<stdio.h>
int main()
{
int n, i;
int s=1;
scanf("%d", &n);
if(n<0)
{
return 0;	
}

for(i=n;i>1;--i)
{s=s*i+1;
}
printf("%d", s);
return 0;
}
