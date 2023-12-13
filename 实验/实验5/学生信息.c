#include <stdio.h>
// 设计一个表示学生信息的结构类型，包含学号、姓名、出生日期（包含年、月、日三部分信息）和3门课（语文、数学、英语）的成绩；

typedef struct 学生信息
{
    char id[20];
    char name[10];
    int year;
    int month;
    int day;
    int chinese;
    int math;
    int eng;
} Student;



// 编写实现从键盘读入n个学生信息的函数；

void input_info(int n,Student students[n])
{
for (int i = 0; i < n; i++)
{
    sacnf("%s %s %d %d %d %d %d %d",students[i].id,students[i].name,
    &students[i].year,&students[i].month,&students[i].day,&students[i].chinese,
    &students[i].math,&students[i].eng);
}
}

//输出信息的函数

void output_info(int n,Student students[n])
{
    for (int i = 0; i < n; i++)
    {
        printf("%s %s %d %d %d %d %d %d",students[i].id,students[i].name,
    students[i].year,students[i].month,&students[i].day,students[i].chinese,
    students[i].math,students[i].eng);
    }
    
}

int main()
{

    int n;
    printf("请输入一共几个学生\n");
    scanf("%d", &n);
    Student students[n];
    intput_info(n,students);
    output_info(n,students);
    return 0;
}