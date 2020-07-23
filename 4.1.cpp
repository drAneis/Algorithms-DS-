#include<stdio.h>
int main()
{
int a[10],i,sum=0,count=0;

for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
sum+=a[i];
if(a[i]%2==0)
count++;

}


for(i=0;i<10;i++)
{
if(a[i]%2!=0)
printf("%d ",a[i]);
}

return 0;
} 


