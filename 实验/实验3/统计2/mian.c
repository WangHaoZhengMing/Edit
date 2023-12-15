// 实现单词个数统计。从键盘输入一行字符，长度小于1000。统计其中单词的个数，
// 各单词以空格分隔，且空格数可以是多个。
// 输入要求：输入只有一行句子。仅有空格和英文字母构成。输出要求：输出单词的个数
#include <stdio.h>
#include <string.h>
#include <ctype.h>

 void static_num(char arr[100])
{
    int count[26] = {0};
    // 统计每个字母出现的频率
    // 将字母转为小写字母
    for (int i = 0; i < 100; i++)
    {
        char lowercase = tolower(arr[i]);

        count[arr[i] - 'a']++;
    }
}
int main()
{
    char arr[100];
    fgets(arr, 100, stdin);
    static_num(arr);
    return 0;
}