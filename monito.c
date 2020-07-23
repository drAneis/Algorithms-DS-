#include <stdio.h> 
#include <string.h> 
char n1[11] = {"- -- -----"};   //笔画1 被数字0, 2, 3, 5, 6, 7, 8, 9 覆盖
char n2[11] = {"|   ||| ||"};   //笔画2 被数字0, 4, 5, 6, 8, 9 覆盖
char n3[11] = {"|||||  |||"};   //笔画3 被数字0, 1, 2, 4, 7, 8, 9 覆盖
char n4[11] = {"  ----- --"};   //笔画4 被数字2, 13, 4, 5, 6, 8, 9 覆盖
char n5[11] = {"| |   | | "};   //笔画5 被数字0, 2, 6, 8 覆盖
char n6[11] = {"|| |||||||"};   //笔画6 被数字0, 1, 3, 4, 5, 6, 7, 8, 9 覆盖
char n7[11] = {"- -- -- --"};   //笔画7 被数字0, 2, 3, 5, 6, 8, 9 覆盖
int main()
{
	int s;
	char szNumber[20];
	int nDigit,nLength,i,j,k;
	while(1)
	{
		scanf("%d%s",&s,szNumber);
		if(s==0)
		    break;
		nLength=strlen(szNumber);
		for(i=0;i<nLength;i++)             //输出所有数字的笔画 1
		{
			nDigit=szNumber[i]-'0';
			printf(" ");
			for(j=0;j<s;j++)              // 一个笔画由s个字符组成 
			    printf("%c",n1[nDigit]);
			printf("  ");
		}
		printf("\n");
		for(i=0;i<s;i++)                  // 输出所有数字的笔画2 和笔画3 
		{
			for(j=0;j<nLength;j++)
			{
				nDigit = szNumber[j] - '0';
				printf("%c", n2[nDigit]);
				for(k = 0 ; k < s ; k++)
				    printf(" ");               //笔画2 和笔画3 之间的空格
				printf("%c ", n3[nDigit]);
			}
			printf("\n");
		}
		for (i = 0 ; i < nLength ; i++)       //输出所有数字的笔画4
		{
			printf(" ");
			nDigit = szNumber[i] - '0';
			for(j = 0 ; j < s ; j++)
			    printf("%c", n4[nDigit]);
			printf("  ");
		}
		printf("\n");
		for(i = 0 ; i < s ; i++)              //输出所有数字的笔画 5 和笔画 6
		{
			for (j = 0 ; j < nLength ; j++)
			{
				nDigit = szNumber[j] - '0';
				printf("%c", n5[nDigit]);
				for (k = 0 ; k < s ; k++)
				    printf( " ");            //笔画5 和笔画6 之间的空格
				printf("%c ", n6[nDigit]);
			}
			printf("\n");
		}
		for(i=0;i<nLength;i++)              //输出所有数字的笔画 7
		{
			printf(" ");
			nDigit=szNumber[i]-'0';
			for(j=0;j<s;j++)
			    printf("%c",n7[nDigit]);
			printf("  ");
		}
		printf("\n");
		printf("\n");
	}
	return 0;
}

