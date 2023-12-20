| 函数名称        | 来源                         | 中文解释                       | 简单用法                                                        |
| --------------- | ---------------------------- | ------------------------------ | --------------------------------------------------------------- |
| `malloc`        | memory allocation(分配)      | 分配内存，返回 void 类型的指针 | `ptr = malloc(size);`                                           |
| `calloc`        | standard library             | 分配并清零内存                 | `ptr = calloc(nitems, size);`                                   |
| `realloc`       | standard library             | 重新分配内存                   | `ptr = realloc(ptr, new_size);`                                 |
| `free`          | standard library             | 释放内存                       | `free(ptr);`                                                    |
| `atof`          | ASCII to float               | 字符串转换为浮点数             | `double num = atof("123.456");`                                 |
| `atoi`          | ASCII to integer             | 字符串转换为整数               | `int num = atoi("123");`                                        |
| `atol`          | ASCII to long                | 字符串转换为长整数             | `long num = atol("123456789");`                                 |
| `atoll`         | ASCII to long long           | 字符串转换为长长整数           | `long long num = atoll("1234567890123");`                       |
| `strtod`        | string to double             | 字符串转换为双精度浮点数       | `double num = strtod("123.456", NULL);`                         |
| `strtof`        | string to float              | 字符串转换为浮点数             | `float num = strtof("123.456", NULL);`                          |
| `strtol`        | string to long               | 字符串转换为长整数             | `long num = strtol("123456789", NULL, 10);`                     |
| `strtoul`       | string to unsigned long      | 字符串转换为无符号长整数       | `unsigned long num = strtoul("123456789", NULL, 10);`           |
| `strtoll`       | string to long long          | 字符串转换为长长整数           | `long long num = strtoll("1234567890123", NULL, 10);`           |
| `strtoull`      | string to unsigned long long | 字符串转换为无符号长长整数     | `unsigned long long num = strtoull("1234567890123", NULL, 10);` |
| `rand`          | random                       | 生成随机数                     | `int num = rand();`                                             |
| `srand`         | seed random                  | 设置随机数种子                 | `srand((unsigned) time(&t));`                                   |
| `qsort`         | quick sort                   | 快速排序                       | `qsort(arr, num, sizeof(int), compare);`                        |
| `bsearch`       | binary search                | 二分查找                       | `bsearch(&key, arr, num, sizeof(int), compare);`                |
| `abs`           | absolute value               | 整数的绝对值                   | `int val = abs(-10);`                                           |
| `labs`          | long absolute value          | 长整数的绝对值                 | `long val = labs(-10L);`                                        |
| `llabs`         | long long absolute value     | 长长整数的绝对值               | `long long val = llabs(-10LL);`                                 |
| `div`           | divide                       | 整数除法                       | `div_t result = div(10, 3);`                                    |
| `ldiv`          | long divide                  | 长整数除法                     | `ldiv_t result = ldiv(10L, 3L);`                                |
| `lldiv`         | long long divide             | 长长整数除法                   | `lldiv_t result = lldiv(10LL, 3LL);`                            |
| `system`        | system command               | 执行系统命令                   | `system("dir");`                                                |
| `exit`          | exit                         | 退出程序                       | `exit(EXIT_SUCCESS);`                                           |
| `abort`         | abort                        | 异常终止程序                   | `abort();`                                                      |
| `atexit`        | at exit                      | 注册终止函数                   | `atexit(func);`                                                 |
| `getenv`        | get environment              | 获取环境变量                   | `char* val = getenv("PATH");`                                   |
| `setenv`        | set environment              | 设置环境变量                   | `setenv("VAR", "value", 1);`                                    |
| `unsetenv`      | unset environment            | 删除环境变量                   | `unsetenv("VAR");`                                              |
| `quick_exit`    | quick exit                   | 快速退出程序                   | `quick_exit(EXIT_SUCCESS);`                                     |
| `_Exit`         | _Exit                        | 立即退出程序                   | `_Exit(EXIT_SUCCESS);`                                          |
| `aligned_alloc` | aligned allocation           | 分配对齐的内存                 | `void* ptr = aligned_alloc(align, size);`                       |

这些函数是 `<stdlib.h>` 头文件中常用的函数,它们提供了内存管理,字符串转换,随机数生成,搜索排序,程序控制等功能.