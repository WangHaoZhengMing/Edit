#include <stdio.h>

// 定义结构体，表示出生日期
typedef struct
{
    int year;
    int month;
    int day;
} Date;

// 定义结构体，表示好友信息
typedef struct
{
    char name[9];
    Date birthdate;
} Friend;

int main()
{
    int n;
    printf("请输入好友人数：");
    scanf("%d", &n);

    if (n <= 0 || n > 10)
    {
        printf("好友人数必须在1到10之间。\n");
        return 1;
    }

    Friend friends[n];

    // 获取好友信息
    for (int i = 0; i < n; i++)
    {
        printf("请输入第 %d 个好友的信息（姓名 年 月 日）：", i + 1);
        scanf("%s %d %d %d", friends[i].name, &friends[i].birthdate.year, &friends[i].birthdate.month, &friends[i].birthdate.day);
    }

    // 寻找年龄最小的好友
    Friend youngest = friends[0];
    for (int i = 1; i < n; i++)
    {
        if (friends[i].birthdate.year > youngest.birthdate.year)
        {
            continue;
        }
        else if (friends[i].birthdate.year < youngest.birthdate.year)
        {
            youngest = friends[i];
        }
        else
        {
            if (friends[i].birthdate.month > youngest.birthdate.month)
            {
                continue;
            }
            else if (friends[i].birthdate.month < youngest.birthdate.month)
            {
                youngest = friends[i];
            }
            else
            {
                if (friends[i].birthdate.day > youngest.birthdate.day)
                {
                    continue;
                }
                else
                {
                    youngest = friends[i];
                }
            }
        }
    }

    // 输出年龄最小的好友的姓名和出生日期
    printf("%s %04d-%02d-%02d\n", youngest.name, youngest.birthdate.year, youngest.birthdate.month, youngest.birthdate.day);

    return 0;
}