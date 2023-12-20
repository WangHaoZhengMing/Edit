// 读入一个实数，输出该实数的小数部分，小数部分若多余的末尾0，请去掉。如输入111111.12345678912345678900
// 则输出0.123456789123456789。若去掉末尾0之后小数部分为0，则输出“No decimal part”。注意该实数的位数不超过100位。
// 请定义并使用如下函数。
// char *decimal(char *p)
// 将字符串p表示的实数的自小数点开始的小数部分存入一个字符串，并由函数返回，若p为“123.456”，则返回的字符串为“.456”。若小数部分为0,返回空指针NULL。
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *decimal(char *p)
{
    // 寻找小数点的位置
    char *dot = strchr(p, '.');
    if (dot == NULL)
    {
        return NULL; // 没有小数部分，返回空指针
    }

    // 分配内存来存储小数部分
    size_t length = strlen(dot);
    char *decimalPart = (char *)malloc(length + 1);
    if (decimalPart == NULL)
    {
        return NULL; // 内存分配失败，返回空指针
    }

    // 复制小数部分到新的字符串中
    strcpy(decimalPart, dot);

    // 去掉多余的末尾0
    int i = length - 1;
    while (i >= 0 && decimalPart[i] == '0')
    {
        decimalPart[i] = '\0';
        i--;
    }

    // 如果小数部分为0，释放内存并返回空指针
    if (strlen(decimalPart) == 1)
    {
        free(decimalPart);
        return NULL;
    }

    return decimalPart;
}

int main()
{
    char number[101];
    printf("请输入一个实数：");
    scanf("%s", number);

    char *decimalPart = decimal(number);
    if (decimalPart == NULL)
    {
        printf("No decimal part\n");
    }
    else
    {
        printf("0%s\n", decimalPart);
        free(decimalPart);
    }

    return 0;
}