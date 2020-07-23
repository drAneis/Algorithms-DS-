#include<stdio.h>

int main()
{
float r,h,C1,Sa,Sb,Va,Vb,PI;
PI = 3.14;
scanf("%f%f",&r,&h);
C1=2*PI*r;
Sa=PI*r*r;
Sb=4*PI*r*r;
Va=4*PI*r*r*r/3;
Vb=Sa*h;
printf("C1=%.2f\n",C1+0.0005);
printf("Sa=%.2f\n",Sa+0.0005);
printf("Sb=%.2f\n",Sb+0.0005);
printf("Va=%.2f\n",Va+0.0005);
printf("Vb=%.2f\n",Vb+0.0005);
return 0;
} 
