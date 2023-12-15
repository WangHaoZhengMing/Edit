#include <stdio.h>

// 定义结构体,用于存储学生信息
typedef struct
{
    char student_id[13]; // 学号,多一个字符用于存储字符串结束符'\0'
    char name[21];       // 姓名,同样多一个字符用于存储字符串结束符'\0'
    int chinese;         // 语文成绩
    int math;            // 数学成绩
    int english;         // 英语成绩
} Student_info;

int main()
{
    int n=0;
    printf("请输入总共多少学生");
    scanf("%d",&n);
    Student_info students[n];
    Student_info Max_marks;
    int Max = 0;

    // 初始化三个同学的信息
    for (int i = 0; i < n; ++i)
    {printf("请输入第%d个学生的信息\n",i+1);
        scanf("%s %s %d %d %d", students[i].student_id, students[i].name, &students[i].chinese, &students[i].math, &students[i].english);
        int sum = students[i].chinese + students[i].math + students[i].english;
        if (sum > Max)
        {
            Max = sum;
            Max_marks=students[i];
        }
    }
// 输出总分最高的学生信息

    printf("总分最高的学生是\n%s %s %d %d %d\n", Max_marks.student_id, Max_marks.name, Max_marks.chinese, Max_marks.math, Max_marks.english);
    return 0;
}