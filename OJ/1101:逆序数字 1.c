// 这个是自己写的，显而易见失败了☹️
#include <stdio.h>
#include <math.h>
#include <string.h>
// 题目描述
// 输入一个正整数n,计算n的逆序数m,输出m与n的和.要求程序定义一个inverse()函数和一个main()函数
// inverse()函数接收一个整数值,返回这个数中数字逆序后的结果值.例如,给定数7631,函数返回1367.
int inverse(int n)
{

char buffer[20]; // 假设整数不会超过20位
    
    int sz ;
    snprintf(buffer, 20, "%d", n); // 将整数转换为字符串
    sz = strlen(buffer); // 获取字符串的长度
    for (int i = 0; i < sz; i++)
    {
        /* code */
    }
    
    


//     int arr[sz + 1];
//     arr[0] = 0;
//     arr[1] = (n % 10 - 0 * 0) / 1; // 个位
//     for (int i = 2; i < sz; i++)
//     {
//         int a = pow(10, i);
//         int b = pow(10, i - 2);
//         int c = pow(10, i - 1);
//         arr[i] = (n % a - arr[i - 1] * b) / c;
//     }
// for (int j = 0; j < sz+1; j++)
// {
//     printf("%d\n",arr[j+1]);
// }

    // 123;
    // int b=(n%100-a*1)/10;
    // int c=(n%1000-b*10)/100;
}

int main()
{
    int n;
    printf("请输入一个数字\n");
    scanf("%d", &n);

    inverse(n);
}