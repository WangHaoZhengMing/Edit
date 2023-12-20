| 函数名称   | 来源                                     | 中文解释                               | 简单用法                             |
| ---------- | ---------------------------------------- | -------------------------------------- | ------------------------------------ |
| `strcpy`   | string copy                              | 字符串复制                             | `strcpy(dest, "Hello");`             |
| `strcat`   | string concatenate                       | 字符串连接                             | `strcat(dest, " World");`            |
| `strcmp`   | string compare                           | 字符串比较                             | `strcmp("Hello", "World");`          |
| `strncmp`  | string compare (n characters)            | 比较字符串的前n个字符                  | `strncmp("Hello", "Help", 3);`       |
| `strlen`   | string length                            | 字符串长度                             | `strlen("Hello");`                   |
| `strchr`   | string character find (first occurrence) | 查找字符在字符串中首次出现的位置       | `strchr("Hello", 'e');`              |
| `strrchr`  | string character find (last occurrence)  | 查找字符在字符串中最后一次出现的位置   | `strrchr("Hello", 'l');`             |
| `strstr`   | string find substring                    | 查找子字符串                           | `strstr("Hello World", "World");`    |
| `strspn`   | string span                              | 检索字符串中连续的字符集合             | `strspn("abcde", "ab");`             |
| `strcspn`  | string complement span                   | 检索字符串中连续不含特定字符集合的部分 | `strcspn("abcde", "de");`            |
| `strtok`   | string tokenize                          | 字符串分割为一系列的字符串             | `strtok("Hello World", " ");`        |
| `memset`   | memory set                               | 内存设置                               | `memset(arr, 0, sizeof(arr));`       |
| `strerror` | string error                             | 返回错误信息                           | `strerror(errno);`                   |
| `memcpy`   | memory copy                              | 内存复制                               | `memcpy(dest, src, strlen(src)+1);`  |
| `memmove`  | memory move                              | 内存移动                               | `memmove(dest, src, strlen(src)+1);` |
| `memcmp`   | memory compare                           | 内存比较                               | `memcmp(arr1, arr2, sizeof(arr1));`  |
| `memchr`   | memory character find                    | 在内存中查找字符                       | `memchr(arr, 'a', sizeof(arr));`     |