#include<stdio.h>
 
 int main()
 {
     int L,M;
    int ans=0;
     scanf("%d%d",&L,&M);
     int tree[L+1];
     for(int i=0;i<L+1;i++){         tree[i]=1;     }
    for(int i=0;i<M;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        for(int j=a;j<=b;j++){
             tree[j] = 0;
         }
     }
    for(int i=0;i<L+1;i++){
         if(tree[i]){
           ans++;
         }
     }
    printf("%d",ans);    
	
	 return 0;
 }
 
