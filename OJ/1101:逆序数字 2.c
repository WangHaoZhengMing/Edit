// 这次是看着网上的方法写的，进行整数和字符串的互化
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int inverse(int n)
{
    char buffer[20];               // 假设整数不会超过20位
    snprintf(buffer, 20, "%d", n); // 将整数转换为字符串
    int sz = strlen(buffer);       // 获取字符串的长度
    // 对调字符串
    for (int i = 0; i < sz / 2; i++)
    {
        char temp = buffer[i];
        buffer[i] = buffer[sz - 1 - i];
        buffer[sz-1-i]=temp;
    }
    int new=atoi(buffer);
    return new;
}

int main()
{
    int n = 9;
    scanf("%d", &n);
    int b=inverse(n);
    int sum=n+b;
    printf("%d",sum);
    return 0;
}