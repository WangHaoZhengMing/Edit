#include <stdio.h>
#include <time.h>

// 定义结构体Date，表示出生日期
typedef struct {
    int year;
    int month;
    int day;
} Date;

// 定义结构体Friend，表示好友信息
typedef struct {
    char name[9];
    Date birthdate;
} Friend;

// 计算两个日期之间的天数差的函数
int calculateAge(Date date)
 {
    time_t now;
    time(&now);  //time() 是一个 C 标准库中的函数
    //localtime() 是一个 C 标准库中的函数，它接受一个指向 time_t 类型的时间戳作为参数
    //并返回一个指向 struct tm 类型的指针，该指针指向一个包含了本地时间信息的结构体。
    struct tm *local = localtime(&now);

    int currentYear = local->tm_year + 1900;
    int currentMonth = local->tm_mon + 1;
    int currentDay = local->tm_mday;

    // 将当前日期和好友的出生日期转换为秒数
    time_t currentTime = mktime(&(struct tm){.tm_year = currentYear - 1900, .tm_mon = currentMonth - 1, .tm_mday = currentDay});
    time_t friendTime = mktime(&(struct tm){.tm_year = date.year - 1900, .tm_mon = date.month - 1, .tm_mday = date.day});

    // 计算两个日期之间的天数差
    double seconds = difftime(currentTime, friendTime);
    int days = seconds / (60 * 60 * 24);

    return days;
}

int main() {
    int n;
    printf("请输入好友人数：");
    scanf("%d", &n);

    if (n <= 0 || n > 10) {
        printf("好友人数必须在1到10之间。\n");
        return 1;
    }

    Friend friends[n];

    // 获取好友信息
    for (int i = 0; i < n; i++) {
        printf("请输入第 %d 个好友的信息（姓名 年 月 日）：", i + 1);
        scanf("%s %d %d %d", friends[i].name, &friends[i].birthdate.year, &friends[i].birthdate.month, &friends[i].birthdate.day);
    }

    // 寻找年龄最小的好友
    Friend youngest = friends[0];
    int minAge = calculateAge(youngest.birthdate);
    for (int i = 1; i < n; i++) {
        int age = calculateAge(friends[i].birthdate);
        if (age < minAge) {
            minAge = age;
            youngest = friends[i];
        }
    }

    // 输出年龄最小的好友的姓名和出生日期
    printf("%s %04d-%02d-%02d\n", youngest.name, youngest.birthdate.year, youngest.birthdate.month, youngest.birthdate.day);

    return 0;
}