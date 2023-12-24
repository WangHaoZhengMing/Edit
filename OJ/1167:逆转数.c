
// 任意给你一个整数,这个数可能很大(最长不超过100位),你能求出它的逆转数吗?
// 逆转数定义如下:
// 1.一个末尾没有0的整数,它的逆转数就是各位数字逆序输出;
// 2.一个负数的逆转数仍是负数;
// 3.一个末尾有0的整数,它的逆转数如同下例:
// reverse (1200) = 2100
// reverse (-56) = -65
// 要求定义并使用如下函数:void reverse(char *str)

// 本解法思路清晰，解法新奇，反正我是真的想不到诶
#include <stdio.h>
#include <string.h>
static int now = 0;
void reverse(char *str)
{
    int len = strlen(str);
    int start = 0, end = len - 1;
    int zero_count = 0;

    // 计算末尾0的数量
    while (end >= 0 && str[end] == '0')
    {
        zero_count++;
        end--;
    }

    // 逆转字符串中非0的部分

    now = end;
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    // 将末尾的0移动到字符串的开头
    // if (zero_count > 0)
    // {
    //     memmove(str + zero_count, str, len - zero_count);
    //     memset(str, '0', zero_count);
    //     str[len] = '\0'; // 确保字符串以null字符结尾
    // }
}

int main()
{
    char number[100]; // 示例输入
    scanf("%s", number);
    if (number[0] == '-')
    {
        reverse(number);
        number[now] = '\0';
        printf("-");
        printf("%s", number);
    }

    else
    {
        reverse(number);

        printf("%s", number);
    }
    return 0;
}