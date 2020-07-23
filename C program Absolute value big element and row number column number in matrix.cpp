 #include <stdio.h>
 #include <math.h> 
 int main()
 {
 int a[6][6]={0};
 int i,n,j,max;
 int row=0, colum=0;
 
	
 
 scanf("%d",&n);
 
  for(i=0;i<n;i++)
  {
 	 for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }	
 	
  }
 
  	max = a[0][0];
  for(i=0;i<n;i++)
  {
  
  	for(j=0;j<n;j++)
	  {
	  
  	
  	 if(abs(a[i][j])>abs(max)) 

		{

		max = a[i][j];
		row = i;
		colum =j;		
		}
 	
	 }
	 
  }
  printf("%d %d %d\n",max,row+1,colum+1);
		
	return 0;
  } 
