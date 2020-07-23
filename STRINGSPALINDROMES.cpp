 /*Palindromes _easy version */
 #include <stdio.h>
 #include <string.h>
     
    int main()
    {
        int n, flag, start, end;
        char a[100];
     
        scanf("%d", &n);
        while(n--) {
            
            scanf("%s", a);
     
            
            start = 0;
            end = strlen(a) - 1;
            flag = 1;
            while(start < end) {
                if(a[end] != a[start]) {
                    flag = 0;
                    break;
                }
                start++;
                end--;
            }
     
            
            if(flag)
                printf("yes\n");
            else
                printf("no\n");
        }
     
        return 0;
    }

