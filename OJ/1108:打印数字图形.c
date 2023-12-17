// 从键盘输入一个整数n(1≤n≤9),打印出指定的数字图形。要求在程序中定义并调用函数PrintLine()来输出图形中的一行，该行中的最大数字是m，函数原型如下：
// PrintLine(int m)；
#include <stdio.h>

void PrintLine(int m) {
    for (int i = 1; i <= m; i++) {
        printf("%d", i);
    }
    for (int i = m - 1; i >= 1; i--) {
        printf("%d", i);
    }
    printf("\n");
}

int main() {
    int n;

    // Read the input number
    scanf("%d", &n);

    // Print the upper half of the pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        PrintLine(i);
    }

    // Print the lower half of the pattern
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        PrintLine(i);
    }

    return 0;
}