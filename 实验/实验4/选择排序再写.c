#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[] = {1, 77, 76, 8678, 758};
    int sz = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < sz - 1; i++)
    {
        for (int j = i + 1; j < sz; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int n = 0; n < sz; n++)
    {
        printf("%d\n", arr[n]);
    }
    return 0;
}
