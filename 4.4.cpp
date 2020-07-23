#include <stdio.h>
int main()
{
float score[10];
float max, min, sum;
int i, j;

scanf("%f", &score[0]);
max = min = score[0];
sum = score[0];
for(i=1; i<10; i++)
{
scanf("%f", &score[i]);

sum += score[i];

if(score[i]>max) max = score[i];
else if(score[i]<min) min = score[i];
}

sum = sum - max -min;


printf("%.2f\n", sum/8.0);

return 0;
} 
