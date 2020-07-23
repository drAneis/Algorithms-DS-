#include <stdio.h>
#include <algorithm>
#include <stdlib.h>
#include<iostream>

void sort();
int arr[100005];
 int n;
int main () {
   
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
     sort();
    printf("%d", arr[0]);
    for (int i = 1; i < n; i++) printf(" %d", arr[i]);
    printf("\n");
    return 0;
}



void sort()
	{
	int i,j;
   int temp;
    int add;

    for( add=n/2; add>0; add/=2){
        for( i=add; i<n; i++){
            temp = arr[i];
            for( j=i-add; j>=0 && temp<arr[j]; j-=add){
                arr[ j+add ] = arr[j];
           }
            arr[ j+add ] = temp;
        }    }
	
		}
