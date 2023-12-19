// 编写一函数len，求一个字符串的长度，注意该长度不计空格。要求用字符指针实现。在主函数中输入字符串，调用该len函数后输出其长度。 
// int len(char *sp) 
//实现sp所指串的长度，不计空格。 
#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int len(char arr[101])
{
    int a= strlen(arr);
    int b=0;
    for (int i = 0; i < a; i++)
    {
        if (!isspace(arr[i]))
        {
            b++;
        }
        
    }
    return b;
}

int main ()
{
    char arr[101];
    fgets(arr,101,stdin);
  int a=  len(arr);
  printf("%d",a);
   return 0;
}
