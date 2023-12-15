#include <stdio.h>
#include <string.h>
#include <ctype.h>

void count_letters(char arr[1000])
{
    int count[26] = {0};
    int len = strlen(arr);

    // 统计每个字母出现的频率
    for (int i = 0; i < len; i++)
    {
        // 如果当前字符是字母，则增加对应字母的计数
        if (isalpha(arr[i]))
        {
            char lowercase = tolower(arr[i]);
            count[lowercase - 'a']++;
        }
    }

    // 输出字母的个数
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%c: %d\n", i + 'a', count[i]);
        }
    }
}

int main()
{
    char arr[1000];
    fgets(arr, sizeof(arr), stdin);

    count_letters(arr);

    return 0;
}