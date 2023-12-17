//这个题目真的会谢，真的很奇葩
#include <stdio.h>

void inverse(int n) {
    if (n > 1) {
        int num;
        scanf("%d", &num);
        inverse(n - 1);
        printf("%d ", num);
    } else if (n == 1) {
        int num;
        scanf("%d", &num);
        printf("%d ", num);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    inverse(n);

    return 0;
}