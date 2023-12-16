// 一个正整数，如果从左向 右读（称之为正序数）和从右向左读（称之为倒序数）是一样的
// 这样的数就叫回文数。输入两个整数m和n（m<n)，输出区间[m，n]之间的回文数。
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int back(int n)
{
    char arr[20];
    snprintf(arr,20,"%d",n); // 将整数转换为字符串
    //互换字符串
    int length=strlen(arr);
    for (int i = 0; i < length/2; i++)
    {
        int temp=arr[i];
        //arr[i]=temp;
        arr[i]=arr[length-i-1];
        arr[length-1-i]=temp;
    }
    int new=atoi(arr);
 return new;
    
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i < b + 1; i++)
    {int x=back(i);
        if (x==i)
        {
            printf("%d ",i);
        }
    }
}