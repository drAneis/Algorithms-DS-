#include<stdio.h>
#include<malloc.h>
#include<string.h>
    typedef struct node_{
    	int data;
    	struct node_ *next;
	}*node,Node;//��㶨�� 
	
	 node creat_list(int *count);//�������� 

	 void get_(node L,int a);//���� 
	 
	 void delete_(node L,int a,int *count);// ɾ��
	 
	 void insert_(node L,int a,int e,int *count);//���� 
	  
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
	  			if(a>count||a<1)//�жϲ���λ���Ƿ�Ϸ� 
	  			{
	  				printf("get fail\n");
				  }
				  else  get_(L,a);
	  			//���ҳɹ��� 
			  }
			  if(!strcmp(order,"insert"))
			  {
			  	 scanf("%d%d",&a,&e);
			  	 if(a>count+1||a<1)
			  	 {
			  	 	printf("insert fail\n");
				   }
			  	 else insert_(L,a,e,&count);
			  	 //����ɹ��� 
			  	 
			  }
	  		  if(!strcmp(order,"delete"))
	  		  {
	  		  	scanf("%d",&a);
	  		  	if(a>count||a<1)
	  		  	{
	  		  		printf("delete fail\n");
					}
	  		  	else delete_(L,a,&count);
	  		  	//ɾ���ɹ��� 
				}
		  }
	  	return 0;
	  }
	  
	  //����Ϊ���ຯ���Ķ��壺 
	     node creat_list(int *count)//�������� 
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
			 
			 return head;//����ָ��ͷ����ָ�� 
		 }
		 
	   void get_(node L,int a)//���Ҳ�ȡ����a��Ԫ�� 
	   {
	   	  node p=L;
		  for(int i=0;i<a;i++) 
		  {
		  	p=p->next;
		  }
		  //ѭ��������pָ���a-1����㣬p��nextָ���a��Ԫ�أ� 
	   	  printf("%d\n",p->data);
	   }
	  
	     void delete_(node L,int a,int *count)//ɾ����a��Ԫ�� 
	     {
	     	node d,p=L;//ָ��dָ����Ҫɾ���ĵ�a��Ԫ�ص�λ�� 
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
	  
	     void insert_(node L,int a,int e,int *count)//�ڵ�a��Ԫ��֮ǰ���� 
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
	      
	      
	      
	      
	      
	      
