#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    float arr[10];
    float Arr[10];
    int i = 0;
    int temp = 0;
    int min = 0;
    int num = 0;
 
    for(i = 0; i < 10; i++)
    {
        scanf("%f", &arr[i]);
        Arr[i] = arr[i];
        if(arr[i] < 0)
        {
            arr[i] = -arr[i];
        }
    }
 
    min = arr[0];
 
    for(i = 1; i < 10; i++)
    {
        if(min > arr[i])
        {
            //min = arr[i];
            num = i;
        }
    }
    //Arr[num] = min;
    temp = Arr[num];
    Arr[num] = Arr[9];
    Arr[9] = temp;
 
 
    for(i = 0; i < 10; i++)
    {
        printf("%.0f ", Arr[i]);
    }
 
    return 0;
}


