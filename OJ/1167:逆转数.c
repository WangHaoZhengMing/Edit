//根本做不对





// 任意给你一个整数,这个数可能很大(最长不超过100位),你能求出它的逆转数吗?
// 逆转数定义如下:
// 1.一个末尾没有0的整数,它的逆转数就是各位数字逆序输出;
// 2.一个负数的逆转数仍是负数;
// 3.一个末尾有0的整数,它的逆转数如同下例:
// reverse (1200) = 2100
// reverse (-56) = -65
// 要求定义并使用如下函数:void reverse(char *str)

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void reverse(char *str) {
    int len = strlen(str);
    bool isNegative = (str[0] == '-'); // 检查是否为负数
    int start = isNegative ? 1 : 0; // 如果是负数,从索引1开始逆转
    int end = len - 1;

    // 移除尾部的零,并记录零的数量
    while (end >= start && str[end] == '0') {
        end--;
    }

    // 计算尾部零的数量
    int zeroCount = len - 1 - end;

    // 逆转数字部分(不包括尾部零和负号)
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    // 将尾部的零移动到逆转后的数字前面
    if (zeroCount > 0) {
        memmove(str + zeroCount, str, len - zeroCount);
        memset(str, '0', zeroCount);
    }

    // 保证字符串正确终止
    str[len] = '\0';
}

int main() {
    char number[101];
    //printf("Enter a large integer (up to 100 digits): ");
    fgets(number, 101, stdin);
    
    // 移除可能存在的换行符
    number[strcspn(number, "\n")] = 0;

    reverse(number);
    printf("%s\n", number);
    return 0;
}
