#include <stdio.h> 
#include <string.h> 
char n1[11] = {"- -- -----"};   //�ʻ�1 ������0, 2, 3, 5, 6, 7, 8, 9 ����
char n2[11] = {"|   ||| ||"};   //�ʻ�2 ������0, 4, 5, 6, 8, 9 ����
char n3[11] = {"|||||  |||"};   //�ʻ�3 ������0, 1, 2, 4, 7, 8, 9 ����
char n4[11] = {"  ----- --"};   //�ʻ�4 ������2, 13, 4, 5, 6, 8, 9 ����
char n5[11] = {"| |   | | "};   //�ʻ�5 ������0, 2, 6, 8 ����
char n6[11] = {"|| |||||||"};   //�ʻ�6 ������0, 1, 3, 4, 5, 6, 7, 8, 9 ����
char n7[11] = {"- -- -- --"};   //�ʻ�7 ������0, 2, 3, 5, 6, 8, 9 ����
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
		for(i=0;i<nLength;i++)             //����������ֵıʻ� 1
		{
			nDigit=szNumber[i]-'0';
			printf(" ");
			for(j=0;j<s;j++)              // һ���ʻ���s���ַ���� 
			    printf("%c",n1[nDigit]);
			printf("  ");
		}
		printf("\n");
		for(i=0;i<s;i++)                  // ����������ֵıʻ�2 �ͱʻ�3 
		{
			for(j=0;j<nLength;j++)
			{
				nDigit = szNumber[j] - '0';
				printf("%c", n2[nDigit]);
				for(k = 0 ; k < s ; k++)
				    printf(" ");               //�ʻ�2 �ͱʻ�3 ֮��Ŀո�
				printf("%c ", n3[nDigit]);
			}
			printf("\n");
		}
		for (i = 0 ; i < nLength ; i++)       //����������ֵıʻ�4
		{
			printf(" ");
			nDigit = szNumber[i] - '0';
			for(j = 0 ; j < s ; j++)
			    printf("%c", n4[nDigit]);
			printf("  ");
		}
		printf("\n");
		for(i = 0 ; i < s ; i++)              //����������ֵıʻ� 5 �ͱʻ� 6
		{
			for (j = 0 ; j < nLength ; j++)
			{
				nDigit = szNumber[j] - '0';
				printf("%c", n5[nDigit]);
				for (k = 0 ; k < s ; k++)
				    printf( " ");            //�ʻ�5 �ͱʻ�6 ֮��Ŀո�
				printf("%c ", n6[nDigit]);
			}
			printf("\n");
		}
		for(i=0;i<nLength;i++)              //����������ֵıʻ� 7
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

