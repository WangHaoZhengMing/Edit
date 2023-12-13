#include <stdio.h>
#include <stdlib.h>

struct Date {
    int year;
    int month;
    int day;
};

struct Friend {
    char name[9];
    struct Date birthday;
};

int compareDates(const void* a, const void* b) {
    struct Friend* friend1 = (struct Friend*)a;
    struct Friend* friend2 = (struct Friend*)b;

    if (friend1->birthday.month == friend2->birthday.month) {
        return friend1->birthday.day - friend2->birthday.day;
    } else {
        return friend1->birthday.month - friend2->birthday.month;
    }
}

int main() {
    int n;
    printf("请输入好友人数：");
    scanf("%d", &n);

    struct Friend* friends = (struct Friend*)malloc(n * sizeof(struct Friend));

    printf("请输入好友信息（姓名 年 月 日）：\n");
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %d", friends[i].name, &friends[i].birthday.year,
              &friends[i].birthday.month, &friends[i].birthday.day);
    }

    qsort(friends, n, sizeof(struct Friend), compareDates);

    printf("按生日排序后的好友信息：\n");
    for (int i = 0; i < n; i++) {
        printf("%s %04d-%02d-%02d\n", friends[i].name, friends[i].birthday.year,
               friends[i].birthday.month, friends[i].birthday.day);
    }

    free(friends);

    return 0;
}
