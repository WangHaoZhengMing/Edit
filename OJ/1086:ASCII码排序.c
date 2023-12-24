// 输入三个字符后，按各字符的ASCII码从小到大的顺序输出这三个字符。
// 输入
// 输入数据有多组，每组占一行，有三个字符组成，之间无空格。
// 输出
// 对于每组输入数据，输出一行，字符中间用一个空格分开。
#include <stdio.h>

int main()
{
    char a, b, c, temp;

    // 使用带空白符的scanf来读取字符并跳过空白字符
    while (scanf(" %c%c%c", &a, &b, &c) != EOF)
    {
        // 比较并交换字符，以便按ASCII码从小到大排序
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        if (a > c)
        {
            temp = a;
            a = c;
            c = temp;
        }
        if (b > c)
        {
            temp = b;
            b = c;
            c = temp;
        }

        // 输出排序后的字符，字符之间用一个空格分隔
        printf("%c %c %c\n", a, b, c);
    }

    return 0;
}