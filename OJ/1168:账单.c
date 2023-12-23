// 多实例测试.首先输入一个整数ncase,表示测试实例的个数.每个测试实例的输入如下:
// 第一行是整数n (n<100).然后是n行的账单信息,每一行由事物的名字name和对应的花费c组成,长度不超过200.中间会有一个或多个空格,而每一行的开头和结尾没有空格. 0.0 < c < 1000.0.
// 输出
// 每个测试实例对应一行输出,输出总的花费,小数点后保留一位数字.
#include <stdio.h>
#include <string.h>

int main() {
    int ncase, n;
    scanf("%d", &ncase); // 读取测试实例的数量

    while (ncase--) {
        scanf("%d", &n); // 读取每个测试实例的行数

        char line[210]; // 用于存储输入行
        double total = 0.0, cost;
        char name[200];

        // 清除缓冲区
        getchar();

        for (int i = 0; i < n; i++) {
            fgets(line, sizeof(line), stdin); // 读取整行输入
            // 从字符串中解析出花费
            sscanf(line, "%*s %lf", &cost);
            total += cost;
        }

        printf("%.1f\n", total); // 输出总花费，保留一位小数
    }

    return 0;
}
