#include <stdio.h>
#include <string.h>

// 定义结构体，用于存储学生信息
typedef struct {
    char student_id[13];  // 学号，多一个字符用于存储字符串结束符'\0'
    char name[21];        // 姓名，同样多一个字符用于存储字符串结束符'\0'
    int chinese;          // 语文成绩
    int math;             // 数学成绩
    int english;          // 英语成绩
} Student;

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n); // 输入学生数量

    Student students[n]; // 创建一个学生数组
    Student top_student; // 用于存储总分最高的学生信息
    int max_total = -1;  // 初始化最高总分

    // 读取每个学生的信息
    for (int i = 0; i < n; ++i) {
        scanf("%s %s %d %d %d", students[i].student_id, students[i].name, &students[i].chinese, &students[i].math, &students[i].english);
        // 计算总分
        int total = students[i].chinese + students[i].math + students[i].english;
        // 如果当前学生总分更高，则更新最高总分和最高分学生信息
        if (total > max_total) {
            max_total = total;
            top_student = students[i];
        }
    }

    // 输出总分最高的学生信息
    printf("%s %s %d %d %d\n", top_student.student_id, top_student.name, top_student.chinese, top_student.math, top_student.english);

    return 0;
}