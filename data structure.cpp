#include<stdio.h>
#include<malloc.h>
#include<string.h>
    typedef struct node_{
    	int data;
    	struct node_ *next;
	}*node,Node;//结点定义 
	
	 node creat_list(int *count);//创建链表 

	 void get_(node L,int a);//查找 
	 
	 void delete_(node L,int a,int *count);// 删除
	 
	 void insert_(node L,int a,int e,int *count);//插入 
	  
	  int main()
	  {
	  	 char order[10];
	  	 int n,a,e,count;
	  	 node L=creat_list(&count);
	  	 scanf("%d",&n);
	  	 for(int i=0;i<n;i++)
	  	{
	  		scanf("%s",order);
	  		if(!strcmp(order,"get"))
	  		{
	  			scanf("%d",&a);
	  			if(a>count||a<1)//判断查找位置是否合法 
	  			{
	  				printf("get fail\n");
				  }
				  else  get_(L,a);
	  			//查找成功！ 
			  }
			  if(!strcmp(order,"insert"))
			  {
			  	 scanf("%d%d",&a,&e);
			  	 if(a>count+1||a<1)
			  	 {
			  	 	printf("insert fail\n");
				   }
			  	 else insert_(L,a,e,&count);
			  	 //插入成功！ 
			  	 
			  }
	  		  if(!strcmp(order,"delete"))
	  		  {
	  		  	scanf("%d",&a);
	  		  	if(a>count||a<1)
	  		  	{
	  		  		printf("delete fail\n");
					}
	  		  	else delete_(L,a,&count);
	  		  	//删除成功！ 
				}
		  }
	  	return 0;
	  }
	  
	  //以下为各类函数的定义： 
	     node creat_list(int *count)//创建链表 
	     {
	     	int n,e;
	     	node p;
	     	scanf("%d",&n);
	     	*count=n;
	     	node head=(node)malloc(sizeof(Node));
	     	head->next=NULL;
	     	for(int i=0;i<n;i++)
	     	{
	     		scanf("%d",&e);
	     		p=(node)malloc(sizeof(Node));
	     		p->data=e;
	     		p->next=head->next; 
	     		head->next=p;
			 }
			 
			 return head;//返回指向头结点的指针 
		 }
		 
	   void get_(node L,int a)//查找并取出第a个元素 
	   {
	   	  node p=L;
		  for(int i=0;i<a;i++) 
		  {
		  	p=p->next;
		  }
		  //循环结束后p指向第a-1个结点，p的next指向第a个元素； 
	   	  printf("%d\n",p->data);
	   }
	  
	     void delete_(node L,int a,int *count)//删除第a个元素 
	     {
	     	node d,p=L;//指针d指向需要删除的第a个元素的位置 
	     	for(int i=0;i<a-1;i++)
	     	{
	     		p=p->next;
			 }
	     	d=p->next;
	     	p->next=d->next;
	     	free(d);
	     	*count=*count-1;
	     	printf("delete OK\n");
		 }
	  
	     void insert_(node L,int a,int e,int *count)//在第a个元素之前插入 
	     {
	        node p=L,q;
	     	for(int i=1;i<a;i++)
	     	{
	     		p=p->next;
			 }
		
	     	 q=(node)malloc(sizeof(Node));
	     	  q->data=e;
	     	  q->next=p->next;
	     	  p->next=q;
	     	 (*count)++;
	     	 printf("insert OK\n");
		 }
	      
	      
	      
	      
	      
	      
