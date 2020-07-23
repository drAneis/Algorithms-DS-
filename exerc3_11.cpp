#include <stdio.h>
 
int main()
{
    char str;
    int countDigits,countAlphabet,countSpecialChar,countSpaces;
   
 
  
    countDigits=countAlphabet=countSpecialChar=countSpaces=0;
 while(scanf("%c",&str))
 {
 
        if(str=='\n')
        break;
        if(str>='0' && str<='9')
            countDigits++;
        else if((str>='A' && str<='Z')||(str>='a' && str<='z'))
            countAlphabet++;
        else if(str==' ')
            countSpaces++;
        else
            countSpecialChar++;

  printf("%d %d %d %d",countAlphabet,countDigits,countSpaces,countSpecialChar);
 
 	}
   
    return 0;
}
