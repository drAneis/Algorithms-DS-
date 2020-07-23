#include <stdio.h>
int main()
{
    int n, number, multiplication;
    while( scanf( "%d", &n)!=EOF )
    {
        multiplication = 1;
        for( int i=1; i<=n; i++)
        {
            scanf( "%d", &number );
            if( number%2 == 1 ) multiplication*=number;
        }
        printf( "%d\n", multiplication );
    }
    return 0;
}

