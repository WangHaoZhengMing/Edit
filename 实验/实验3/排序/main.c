
#include <stdio.h>

// 交换两个数的大小
void swap(int *a, int *b)
{
    if (*a > *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

// 排序交换主函数
void sort(int arr[], int sz)
{
    for (int i = 0; i < sz - 1; i++)
    {
        for (int j = i; j < sz - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {1, 2, 5, 76, 8, 6, 444};
    int sz = sizeof(arr) / sizeof(arr[0]);

    sort(arr, sz);

    for (int q = 0; q < sz; q++)
    {
        printf("%d ", arr[q]);
    }

    return 0;
}
