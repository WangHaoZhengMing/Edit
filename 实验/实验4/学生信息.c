#include <stdio.h>
// 设计一个表示学生信息的结构类型,包含学号,姓名,出生日期(包含年,月,日三部分信息)和3门课(语文,数学,英语)的成绩;

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

// 编写实现从键盘读入n个学生信息的函数;

void input_info(int n, Student students[n])
{
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s %d %d %d %d %d %d", students[i].id, students[i].name,
              &students[i].year, &students[i].month, &students[i].day, &students[i].chinese,
              &students[i].math, &students[i].eng);
    }
}

// 输出信息的函数

void output_info(int n, Student students[n])
{
    for (int i = 0; i < n; i++)
    {
        printf("%s %s %d %d %d %d %d %d", students[i].id, students[i].name,
               students[i].year, students[i].month, students[i].day, students[i].chinese,
               students[i].math, students[i].eng);
    }
}

// 编写利用指针实现按总成绩排序的函数(其实不是的啦）
void sa(int n, Student students[n])
{
    int mark[n];
    for (int i = 0; i < n; i++)
    {
        mark[i] = students[i].chinese + students[i].eng + students[i].math;
    }
    for (int j = 0; j < n - 1; j++)
    {
        for (int q = 0; q < n - j; q++)
        {
            if (mark[q] > mark[q + 1])
            {
                int temp = mark[q];
                mark[q] = mark[q + 1];
                mark[q + 1] = temp;
            }
        }
    }
}

//选择并输出信息
void check_and_show(int n, Student students[])
{
    int i;
    printf("please input the i of the student you want check");
    scanf("%d", &i);
    i++;
    printf("%s %s %d %d %d %d %d %d", students[i].id, students[i].name,
           students[i].year, students[i].month, students[i].day, students[i].chinese,
           students[i].math, students[i].eng);
}

// 编写插入学生信息的函数
void insert (int n,Student students[])
{
int i=n++;
scanf("%s %s %d %d %d %d %d %d", students[i].id, students[i].name,
              &students[i].year, &students[i].month, &students[i].day, &students[i].chinese,
              &students[i].math, &students[i].eng);
}

//删除学生信息的函数
void delete (int n,Student students[])
{
    int x;
    printf("please inpute the number of the student you want to delete\n");
    scanf("%d",&x);
   // int index = x--;
    int sz=n-1;
    for (int i = n; i < n-1; i++)
    {
        students[n]=students[n+1];
    }
    

}

//修改学生信息
void edit(int n,Student students[])
{
    printf("please input the number of the shudent you want to edit\n");
    int i;
    scanf("%d",&i);
    i--;
    scanf("%s %s %d %d %d %d %d %d", students[i].id, students[i].name,
              &students[i].year, &students[i].month, &students[i].day, &students[i].chinese,
              &students[i].math, &students[i].eng);
}

int main()
{

    int n;
    printf("请输入一共几个学生\n");
    scanf("%d", &n);
    Student students[n];
   int option;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Input student information\n");
        printf("2. Output student information\n");
        printf("3. Check and show student information\n");
        printf("4. Insert a student\n");
        printf("5. Delete a student\n");
        printf("6. Edit a student\n");
        printf("7. Exit\n");
        printf("Please choose an option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                input_info(n, students);
                break;
            case 2:
               sa(n, students);
                break;
            case 3:
                check_and_show(n, students);
                break;
            case 4:
                insert(n, students);
                n++;  // increase the number of students after inserting a new one
                break;
            case 5:
                delete(n, students);
                n--;  // decrease the number of students after deleting one
                break;
            case 6:
                edit(n, students);
                break;
            case 7:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid option. Please try again.\n");
        }
    return 0;
}
}
