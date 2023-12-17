#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int digitSum(int n)
{
    char arr[20];
    snprintf(arr, 20, "%d", n);
    int attin[20];
    int sum = 0;
    for (int i = 0; i <(int)strlen(arr); i++)
    {
        attin[i] = arr[i] - '0';
        sum = sum + attin[i];
    }

    if (sum > 0 && sum < 10)
    {
        ;
    }
    else
    {
     
        return digitSum(sum);
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);
    int b=digitSum(n);
    printf("%d",b);
    return 0;
}