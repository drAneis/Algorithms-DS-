#include<stdio.h>
 int main ()
 
{ int year, month,day;

scanf("%d %d %d", &year, &month, &day);
printf("Date in PR from is %d-%d-%d\n",year,month,day);
printf("Date in UK from is %d/%d/%d\n",day,month,year);
printf("Date in USA from is %d/%d/%d\n",month,day,year);

 
 	return 0;
}
