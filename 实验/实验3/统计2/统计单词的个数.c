
// 计单词的个数
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char arr[10088];
    int n=0;
    //arr[0]=1;
    fgets(arr,sizeof(arr),stdin);
    for (int i= 0; i < (int)sizeof(arr)&&arr[i] != '\0' ; i++)
    {
        if (arr[i]==' ')
        {
            n++;
        }
        
    }
    if (arr[0] == '\n')
    {
        printf("共有0个字母");
    
    }
    else {printf("共有%d个单词",n+1);}
    return 0;
}