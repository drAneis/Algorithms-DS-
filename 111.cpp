#include<stdio.h>
#include<string.h>

int main()
{
	int letter=0,space=0,number=0,other=0;
	int i;
	char s[100];
	gets(s);
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z')
			letter++;
		else if(s[i]==' ')
			space++;
		else if(s[i]<='9'&&s[i]>='0')
			number++;
		else
			other++;
	}
	printf("%d %d %d %d",letter,number,space,other);
 return 0;
}

