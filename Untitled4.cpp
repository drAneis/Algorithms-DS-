 #include<stdio.h> 
 int main()
 
 {
 	int n,a,b,c; 
	 double x; 
	 
	 while(scanf("%d",&n)!=EOF) 
	 
	 { if(n==0) { break; } a=b=c=0;
	  while(n--)
	   { 	
	   scanf("%lf",&x);
	   		 if(x<0)
				 {
				  a++;
				 }
	   else if(x==0) { b++; }
	    else if(x>0) { c++; } } 
	   printf("%d %d %d\n",a,b,c); } 
	   
	   return 0;
 }

