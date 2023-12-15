#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

char find_most_frequent_char(const char *str)//定义一个只读量
{
    int count[26] = {0};//初始化数组
    int maxCount = 0;//定义出现的最大数量，在之后不断更改
    char mostFrequent = 'a';

    // 统计每个字母出现的次数
    for (int i = 0; str[i] != '\0' && i < MAX_LENGTH; i++)
    {
        if (isalpha(str[i]))
        {
            char lowercase = tolower(str[i]);
            count[lowercase - 'a']++;
            if (count[lowercase - 'a'] > maxCount ||
                (count[lowercase - 'a'] == maxCount && lowercase < mostFrequent))
            {
                maxCount = count[lowercase - 'a'];//更新最大频数
                mostFrequent = lowercase;//更新输出的字母
            }
        }
    }

    return mostFrequent;//返回字母

}

int main()
{
    char str[MAX_LENGTH + 1]; // +1 for the null terminator

    //读取字符串
    fgets(str, MAX_LENGTH + 1, stdin);

    // Find and print the most frequent character
    char result = find_most_frequent_char(str);
    printf("%c\n", result);

    return 0;
}