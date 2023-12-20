| 函数名称   | 来源                  | 中文解释                         | 简单用法                             |
| ---------- | --------------------- | -------------------------------- | ------------------------------------ |
| `printf`   | standard input output | 格式化输出                       | `printf("%d", 10);`                  |
| `scanf`    | standard input output | 格式化输入                       | `scanf("%d", &num);`                 |
| `putchar`  | standard input output | 输出单个字符                     | `putchar('A');`                      |
| `getchar`  | standard input output | 读取单个字符                     | `ch = getchar();`                    |
| `puts`     | standard input output | 输出字符串并换行                 | `puts("Hello World");`               |
| `gets`     | standard input output | 读取字符串（不安全）             | `gets(str);` *                       |
| `fprintf`  | standard input output | 文件格式化输出                   | `fprintf(file, "%d", 10);`           |
| `fscanf`   | standard input output | 文件格式化输入                   | `fscanf(file, "%d", &num);`          |
| `fputc`    | standard input output | 文件中写入字符                   | `fputc('A', file);`                  |
| `fgetc`    | standard input output | 文件中读取字符                   | `ch = fgetc(file);`                  |
| `fputs`    | standard input output | 文件中写入字符串                 | `fputs("Hello", file);`              |
| `fgets`    | standard input output | 文件中读取字符串                 | `fgets(str, 10, file);`              |
| `fread`    | standard input output | 从文件读取数据                   | `fread(buffer, size, count, file);`  |
| `fwrite`   | standard input output | 向文件写入数据                   | `fwrite(buffer, size, count, file);` |
| `fflush`   | standard input output | 刷新输出缓冲区                   | `fflush(stdout);`                    |
| `setbuf`   | standard input output | 设置文件的缓冲区                 | `setbuf(file, buf);`                 |
| `setvbuf`  | standard input output | 设置文件的缓冲区策略             | `setvbuf(file, buf, _IOFBF, size);`  |
| `rewind`   | standard input output | 重置文件指针                     | `rewind(file);`                      |
| `ftell`    | standard input output | 获取文件指针当前位置             | `pos = ftell(file);`                 |
| `fseek`    | standard input output | 设置文件指针位置                 | `fseek(file, 0, SEEK_SET);`          |
| `fgetpos`  | standard input output | 获取文件指针当前位置的另一种方式 | `fgetpos(file, &pos);`               |
| `fsetpos`  | standard input output | 设置文件指针位置的另一种方式     | `fsetpos(file, &pos);`               |
| `remove`   | standard input output | 删除文件                         | `remove("file.txt");`                |
| `rename`   | standard input output | 重命名文件                       | `rename("old.txt", "new.txt");`      |
| `tmpfile`  | standard input output | 创建临时文件                     | `file = tmpfile();`                  |
| `tmpnam`   | standard input output | 生成临时文件名                   | `tmpnam(s);`                         |
| `perror`   | standard input output | 打印错误消息                     | `perror("Error");`                   |
| `feof`     | standard input output | 检测文件结束                     | `feof(file);`                        |
| `ferror`   | standard input output | 检测文件错误                     | `ferror(file);`                      |
| `clearerr` | standard input output | 清除文件错误标志                 | `clearerr(file);`                    |

\* 注意：`gets` 函数在C11标准中已被废弃，因为它容易导致缓冲区溢出，应使用 `fgets` 替代。