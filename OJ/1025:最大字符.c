#include <stdio.h>

int main() {
    char char1, char2, char3;

    // 从标准输入读取三个字符，并将它们赋值给变量char1、char2、char3
    scanf("%c %c %c", &char1, &char2, &char3);

    // 找出最大的字符
    char maxChar = char1;
    if (char2 > maxChar) {
        maxChar = char2;
    }
    if (char3 > maxChar) {
        maxChar = char3;
    }

    // 打印最大的字符
    printf("%c\n", maxChar);

    return 0; // 返回0，表示程序正常结束
}