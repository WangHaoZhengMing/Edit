// 读入一个实数，输出实数的整数部分。注意该实数的位数不超过100位。输入的整数部分可能含有不必要的前导0，输出时应去掉
// 当然，若整数部分为0，则该0不能去掉。如输入0023.56732，输出应为23，而不是0023；0.123对应的输出应为0。当然输入也可能不含小数部分。
// 要求定义并使用rounding()函数，原型如下：
// char *rounding(char *p)
// 练习使用手动分配内存并释放

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void rounding(char *p)
{ // 使用 strtok 函数分割输入字符串，以点号为分隔符。
    char* token = strtok(p, ".");
   //char token[30];
   // token 现在指向点号之前的部分字符串。
    // 如果我们只是移除前导零，就没有必要将它复制到另一个数组中。
    
    // 通过增加 token 指针来跳过前导零。
    while (*token == '0')
    {
        token++;
    }
    
    // 如果所有字符都是零，我们希望至少打印一个 '0'。
    if (*token == '\0')
    {
        // 所有字符都是零，所以我们将 token 设置为指向 "0" 字符串。
        token = "0";
    }
    
    // 打印结果。
    printf("%s", token);
    
    // 如果有小数部分，我们可能也想处理它。
    // 然而，原始代码中缺少了这部分逻辑。

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
