// 一个正整数，如果从左向右读（称之为正序数）和从右向左读（称之为倒序数）是一样的，这样的数就叫回文数。任取一个正整数，如果不是回文数，将该数与他的倒序数相加，若其和不是回文数，则重复上述步骤
// 一直到获得回文数为止。例如：68变成154（68+86），再变成605（154+451），最后变成1111（605+506），而1111是回文数。
// 于是有数学家提出一个猜想：不论开始是什么正整数，在经过有限次正序数和倒序数相加的步骤后，都会得到一个回文数。至今为止还不知道这个猜想是对还是错。
// 现在请你编程序验证之。你已经会写求一个整数的逆序数的函数inverse()，那么如下循环可以模拟回文数猜想的验证过程：
// // while( m = inverse(n), m != n)
// 输出n;
// 把n更新为 m + n;
// 输入
// 输入一个正整数。特别说明：输入的数据保证中间结果小于2^31。
// 输出
// 输出占一行，变换的过程中得到的数值，两个数之间用空格隔开。
// 样例输入 复制
// 27228
// 样例输出 复制
// 27228 109500 115401 219912
#include <stdio.h>

// Assume the inverse function is defined elsewhere
int inverse(int n);

int main() {
    int n, m;

    // Read the input number
    scanf("%d", &n);

    // Loop until the number is a palindrome
    while ((m = inverse(n)) != n) {
        printf("%d ", n); // Output the current number
        n = m + n; // Update n to the sum of the current number and its inverse
    }
    printf("%d\n", n); // Finally, print the palindrome number

    return 0;
}

// You should define the inverse function here
int inverse(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}