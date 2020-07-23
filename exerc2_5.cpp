#include<stdio.h>
 int main()
 {
  int integer,thousand,hundred,unit,fourth;
  scanf("%d",&integer);
  
   if ((thousand=integer/10000)==(unit=integer%10) && ( hundred=integer%10000/1000)==( fourth=integer%100/10))
	{
		 	printf("yes\n");
	}
	else
	{
	printf("no\n");	
	}
 		
 	return 0;
 }

