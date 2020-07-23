#include<stdio.h>
int main()

{
	
int module (int x);

int a,c;

	scanf("%d",&a);

c=module(a);
printf("module %d\n", c);
	
	
	return 0;
}


int module (int x)
{
int z;

if(x>0){
z=x;	
}
else
z=((-1)*x);

return(z);	
	
}
