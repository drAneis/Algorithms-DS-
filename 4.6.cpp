 #include <stdio.h>

int main()

{
 int i,site,m,max,a[100];

    while(scanf("%d",&m)!=EOF)

    {
     for(i=0; i<=m-1; i++)

     scanf("%d",&a[i]);

        max=a[0];

        site=1;

        for(i=0; i <= m-1; i++)

        {

            if(a[i]>max)

            {

                max=a[i];

                site=i+1;

            }

        }

   printf("%d %d\n",max,site);

    }

    return 0; 

}
