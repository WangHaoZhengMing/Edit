// 读入一个实数，输出实数的整数部分。注意该实数的位数不超过100位。输入的整数部分可能含有不必要的前导0，输出时应去掉
// 当然，若整数部分为0，则该0不能去掉。如输入0023.56732，输出应为23，而不是0023；0.123对应的输出应为0。当然输入也可能不含小数部分。
// 要求定义并使用rounding()函数，原型如下：
// char *rounding(char *p)
// 练习使用手动分配内存并释放

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void rounding(char *p)
{
   
   char* token=strtok("p",".");

    printf("%s,token");
}

int main()
{
    char num[100];
    fgets(num, 100, stdin);
    rounding(num);
    // if (num[0] == '0' && num[1] == '.')
    // {
    //     printf("0");
    // }
    // else
    // {
    //     /* code */
    // }

    return 0;
}
