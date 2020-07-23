#include <stdio.h>

#define Null -1
#define maxsize 10

typedef char ElementType;
struct TreeNode{
    ElementType Element;
    int Left;
    int Right;
}T1[maxsize],T2[maxsize];

int BuildTree(struct TreeNode T[]);
int Isomorphic(int R1,int R2);

int main()
{
    int R1,R2;
    R1 = BuildTree(T1);
    R2 = BuildTree(T2);
    
    if(Isomorphic(R1,R2)){
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    return 0;
}
int BuildTree(struct TreeNode T[])
{
	int N;
	int i;
	int Root=-1;
	char c,l,r;

		printf("Please input the number of nodes: \n");
	scanf("%d",&N); 
	int check[maxsize]={0};
	if(N){
	
		for(i=0;i<N;i++)
		{
			scanf("\n%c %c %c",&T[i].Element,&l,&r);
			if(l!='-'){
				T[i].Left = l-'0';
				check[(T[i].Left)] = 1;
			} 
			else {
				T[i].Left = Null; 
			}
			if(r!='-'){
				T[i].Right = r-'0';
				check[(T[i].Right)] = 1;
			} 
			else {
				T[i].Right = Null; 
			}
			
		}
		for(i=0;i<N;i++){
			if(check[i]==0){Root = i;break;}
		}
	}
	return Root;
}

int Isomorphic(int R1,int R2)
{
	int flag = 0;
	if((R1==Null)&&(R2==Null)){
		flag = 1;
	}
	else if(((R1==Null)&&(R2!=Null))||((R1!=Null)&&(R2==Null))){
		flag = 0;
	}
	else if(T1[R1].Element!=T2[R2].Element){
		flag = 0;
	}
	else if((T1[R1].Left==Null)&&(T2[R2].Left==Null)){
		flag = Isomorphic(T1[R1].Right,T2[R2].Right);
	}
	else if(((T1[R1].Left!=Null)&&(T2[R2].Left!=Null))&&((T1[T1[R1].Left].Element)==(T2[T2[R2].Left].Element))){
		flag = Isomorphic(T1[R1].Left,T2[R2].Left)&&Isomorphic(T1[R1].Right,T2[R2].Right);
	}
	else {
		flag = Isomorphic(T1[R1].Left,T2[R2].Right)&&Isomorphic(T1[R1].Right,T2[R2].Left);
	}
	return flag;
}




