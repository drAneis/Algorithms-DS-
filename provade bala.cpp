 #include<stdio.h>
 int main()
 
 {float numberv;
	   	    	printf("Please Input the number:\n");
	
					float squareRoot(float n);		
	
					float c;
	
					scanf("%f",&numberv);
	
					c=squareRoot(numberv);
				printf("The Square Root is: %0.2f\n", c);
	
	
	return 0;
			}
			
 /*Returns the square root of n. Note that the function */
float squareRoot(float n) 
{ 
  /*We are using n itself as initial approximation 
   This can definitely be improved */
  float x = n; 
  float y = 1; 
  float e = 0.000001; /* e decides the accuracy level*/
  while(x - y > e) 
  { 
    x = (x + y)/2; 
    y = n/x; 
  } 
  return (x); 
} 
 
 
 
 
 

