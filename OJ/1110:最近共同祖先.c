#include <stdio.h>

int common(int x, int y) {
    if (x == y) {
        return x;
    } else if (x > y) {
        return common(x / 2, y);
    } else {
        return common(x, y / 2);
    }
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int result = common(x, y);

    printf("%d\n", result);

    return 0;
}