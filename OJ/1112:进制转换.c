// 输入一个十进制整数n,输出对应的二进制整数.常用的转换方法为"除2取余,倒序排列".将一个十进制数除以2,得到余数和商
// 将得到的商再除以2,依次类推,直到商等于0为止,倒取除得的余数,即为所求的二进制数.例如,把52换算成二进制数的计算过程如下图:
#include <stdio.h>
#include <string.h>
#include<stdlib.h>

void convert(int n, char *binary) // 在代码中,char* binary被声明为指针形式,是因为我们要在convert函数中修改binary字符串的内容.指针允许我们在函数内部对字符串进行修改,并将修改后的结果传递回调用函数.

// 当我们传递一个数组作为函数参数时,实际上是传递数组的首地址,也就是指向数组第一个元素的指针.因此,当我们在函数内部修改指针所指向的字符串时,实际上是修改了原始数组.

// 在这个例子中,binary指针指向了一个字符数组,用于保存二进制位的字符串.通过在convert函数中修改binary指针所指向的字符串,我们可以将每个二进制位附加到原始的binary字符串中.

// 如果我们将binary声明为一个字符数组而不是指针形式,那么在函数调用时会创建一个binary的副本,而不是直接修改原始的binary字符串.这样就无法将修改后的二进制位传递回main函数.

// 因此,为了能够在convert函数中修改binary字符串并将修改后的结果传递回main函数,我们需要将binary声明为指针形式.这样可以通过指针的引用来修改原始的字符串.

{
    int quo;
    int remainder;
    quo = n / 2;
    remainder = n % 2;
    // 将当前数字的二进制位附加到字符串中
    char remainderChar = remainder + '0';
    strncat(binary, &remainderChar, 1);
    if (quo == 0)
    {
        // 反转并打印字符串
        //  for (int i = strlen(binary); i >= 0; i--)
        //  {
        //      char aaa = binary[i];
        //      int j = 0;
        //      arr[j] = aaa - '0';
        //      j++;
        //  }
        //  int sz = sizeof(arr) / sizeof(arr[0]);
        //  for (int q = 0; q < sz; q++)
        //  {
        //      printf("%d", arr[q]);//以整形的形式打印
        //  }
        int sz = strlen(binary);
        for (int i = 0; i < sz / 2; i++)
        {
            char temp = binary[i];
            binary[i] = binary[sz - 1 - i];
            binary[sz - 1 - i] = temp;
        }
long a=atoi(binary);
printf("%lf",a);

    }
    else
    {
        convert(quo, binary);
    }
}
int main()
{
    int a;
    scanf("%d", &a);
    char binary[32] = "";
    convert(a, binary);
    return 0;
}