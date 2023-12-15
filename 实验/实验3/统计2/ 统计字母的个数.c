#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    //输入字符串
     char arr[100];
     int count[26]={0};
     fgets(arr,sizeof(arr),stdin);
     //统计阶段
     for (int i = 0; i < (int)sizeof(arr); i++)
     {
        if (isalpha(arr[i]))
        {
            char lowercase=tolower(arr[i]);
            count[lowercase-'a']++;
        }
        
     }
     
     for (int j = 0; j <26; j++)
     {
        printf("%c有%d个\n",'a'+j,count[j]);
     }
     
    return 0;
}