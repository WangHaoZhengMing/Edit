
#include <stdio.h>

int main()
{
    char letter;

    // 从标准输入读取一个字母，并将其赋值给变量letter
    scanf("%c", &letter);

    // 将输入的字母统一转换为小写字母，方便后续处理
    letter = (letter >= 'A' && letter <= 'Z') ? (letter + ('a' - 'A')) : letter;
    //条件运算符的语法是：condition ? expression1 : expression2。

    // 如果condition为真，则整个表达式的值为expression1；如果condition为假，则整个表达式的值为expression2。

    // 在这行代码中，condition是(letter >= 'A' && letter <= 'Z')，即判断letter是否为大写字母。
    // 如果是大写字母，则执行letter + ('a' - 'A')，即将大写字母转换为对应的小写字母；
    // 如果不是大写字母，则直接将letter赋值给letter，即不进行转换。

    // 计算字母在字母表中的序号
    int position = letter - 'a' + 1;

    // 打印字母在字母表中的序号
    printf("%d\n", position);

    return 0; // 返回0，表示程序正常结束
}
