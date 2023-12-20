//该程序一共删减了三次，到最后终于出来了，太不容易了呜呜呜呜欧

// // #include <stdio.h>
// // // 计算一个数的所有真因子之和
// // int sumOfProperDivisors(int num) {
// //     int sum = 0;
// //     for (int i = 1; i <= num / 2; i++) {
// //         if (num % i == 0) {
// //             sum += i;
// //         }
// //     }
// //     return sum;
// // }

// // // 判断两个数是否是友好数对
// // int areAmicableNumbers(int m, int n) {
// //     if (sumOfProperDivisors(m) == n && sumOfProperDivisors(n) == m && m != n) {
// //         return 1;
// //     }
// //     return 0;
// // }

// // // 判断一个数对数组中是否已经包含了指定的数对
// // int containsPair(int pairs[][2], int pairCount, int m, int n) {
// //     for (int i = 0; i < pairCount; i++) {
// //         if ((pairs[i][0] == m && pairs[i][1] == n) || (pairs[i][0] == n && pairs[i][1] == m)) {
// //             return 1;
// //         }
// //     }
// //     return 0;
// // }

// // int main() {
// //     int m, n;
// //     //printf("请输入两个正整数m和n（m < n）：");
// //     scanf("%d %d", &m, &n);

// //     int pairs[1000][2]; // 用于存储友好数对
// //     int pairCount = 0;   // 友好数对的数量

// //     int found = 0; // 用于标记是否找到友好数对
// //     //printf("m到n之间的友好数对有：\n");
// //     for (int i = m; i <= n; i++) {
// //         for (int j = i + 1; j <= n; j++) {
// //             if (areAmicableNumbers(i, j) && !containsPair(pairs, pairCount, i, j)) {
// //                 printf("%d %d\n", i, j);
// //                 pairs[pairCount][0] = i;
// //                 pairs[pairCount][1] = j;
// //                 pairCount++;
// //                 found = 1;
// //             }
// //         }
// //     }

// //     if (!found) {
// //         printf("No answer\n");
// //     }

// //     return 0;
// // }
// #include <stdio.h>

// int sum_of_proper_divisors(int num) {
//     int divisors_sum = 0;
//     for (int i = 1; i < num; i++) {
//         if (num % i == 0) {
//             divisors_sum += i;
//         }
//     }
//     return divisors_sum;
// }

// int are_amicable_numbers(int m, int n) {
//     return sum_of_proper_divisors(m) == n && sum_of_proper_divisors(n) == m && m != n;
// }

// int contains_pair(int pairs[][2], int pairCount, int m, int n) {
//     for (int i = 0; i < pairCount; i++) {
//         if ((pairs[i][0] == m && pairs[i][1] == n) || (pairs[i][0] == n && pairs[i][1] == m)) {
//             return 1;
//         }
//     }
//     return 0;
// }

// void find_amicable_numbers(int m, int n) {
//     int pairs[100][2];
//     int pairCount = 0;
//     int found = 0;
//     printf("m到n之间的友好数对有：\n");
//     for (int i = m; i <= n; i++) {
//         for (int j = i + 1; j <= n; j++) {
//             if (are_amicable_numbers(i, j) && !contains_pair(pairs, pairCount, i, j)) {
//                 printf("%d %d\n", i, j);
//                 pairs[pairCount][0] = i;
//                 pairs[pairCount][1] = j;
//                 pairCount++;
//                 found = 1;
//             }
//         }
//     }
//     if (!found) {
//         printf("No answer\n");
//     }
// }

// int main() {
//     int m, n;
//     printf("请输入两个正整数m和n（m < n）：");
//     scanf("%d %d", &m, &n);
//     find_amicable_numbers(m, n);
//     return 0;
// }
#include <stdio.h>

int facsum(int n) {
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != (n / i)) {
                sum += n / i;
            }
        }
    }
    return sum;
}

int main() {
    int m, n;
    int found_amicable = 0;
    //printf("请输入两个正整数m和n，1<m<=n<=10000：\n");
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++) {
        int sum_i = facsum(i);
        if (sum_i > i && sum_i <= n) {
            if (facsum(sum_i) == i) {
                printf("%d %d\n", i, sum_i);
                found_amicable = 1;
            }
        }
    }
    if (!found_amicable) {
        printf("No answer\n");
    }
}
// 1. **因子和计算函数（facsum）**：这个函数的目的是计算一个给定整数的所有正因子（除了本身）的和。它通过遍历从2到这个数的平方根，找出所有的因子，并将它们加起来。如果一个数是完全平方数，那么它的平方根只会被计算一次。

// 2. **主函数（main）**：这个函数首先提示用户输入两个正整数m和n，然后从m遍历到n，对每个数，计算它的因子之和，然后检查这个因子之和是否也是一个在m和n之间的数，如果是，再计算这个因子之和的因子之和，看是否等于原来的数。如果等于，那么就找到了一对友好数，输出这对数。如果在m和n之间没有找到任何友好数对，那么就输出“No answer”。

// 3. **友好数的检测**：在主函数中，我们使用了一个标志变量found_amicable来记录是否找到了友好数对。如果找到了，就将这个变量设置为1，如果遍历完所有的数都没有找到，那么这个变量就会保持为0，然后我们就输出“No answer”。