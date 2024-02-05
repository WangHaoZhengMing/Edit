# 用VSCode写C语言代码吧并编译

## 写代码

注意:关于编程的任何路径尽量不要出现空格,这是因为shell在解析你的命令时会用空格隔开各种参数,如果你的路径中有空格,同时你又处理不得当,shell可能会将其分为两部分.这里我推荐大家在新建文件夹时或给文件起名字的时候都不带空格,或者将空格改为下划线`_`,这样能有效避免一些错误.

```c
#include <stdio.h>

int main() {
    char c; // 声明一个字符变量c

    scanf("%c", &c); // 从标准输入读取一个字符,并将其赋值给变量c

    if (c >= 'a' && c <= 'z') { // 如果c是小写字母
        c = c - ('a' - 'A'); // 将c转换为对应的大写字母
    }

    printf("%c\n", c); // 打印变量c的值并换行

    return 0; // 返回0,表示程序正常结束
}
```
## 编译代码入门

用什么来编译代码呢?当然是用程序了.`/bin/date`可以显示当前的时间,`/bin/mkdir`可以创建一个新的空文件夹;那什么程序能将`c`代码编译为我们想要的二进制可执行文件/程序呢?在编辑时,我们使用编译程序进行编译.这类工具通常为`clang(Mac)` `g++` `gcc(windows)`.二者使用方法几乎没有区别,在本课我们使用clang进行编译练习.

不过刚刚一直在说编译,什么是编译?**简单来说**,你写的后缀为`.c`的文件是文本文件,里面可能还引用了一些头文件(也是代码文件,文本文件);编译就是将这些东西链接起来,转换为一堆机器码使得电脑硬件可以直接执行.(注:这里说的编译严格一些应该指编译链接)

## 第一次编译和执行

安装好后，我们直接编译就好了。可以先执行`which clang`看看`shell`怎么解析这条命令，发现返回了一个路径`/usr/bin/clang`，也就是说，虽然`g++`这个程序在`/usr/bin/clang`，但你用一个单词/命令告诉终端终端就会知道你要执行的程序在这里（与环境变量相关，`/usr/bin`在环境变量中）

编译：执行：

```bash
clang 1023:大小写转换.c
```
来到资源管理器里发现目录下多了一个`a.out`文件。这个文件就是我们需要的可执行文件。

### 给a.out改个名字

给`clang`添加`-o`参数

```bash
g++ 1023:大小写转换.c -o text.out
./text.out
```

```bash
g++ 1023:大小写转换.c -o text
./text
```

我们在后面对于用`clang`编译生成的可执行文件都会带上`.out`后缀，到后面使用`VS Code`的时候你就知道原因了。推荐大家也将`C`代码编译出的二进制文件带上`.out`后缀。当然，在Mac os不带也行，因为`macOS`中二进制可执行文件本身就不带后缀。但win就说不准了。

## clang的参数讲解

这个部分clang和gcc不太一样，不再详细讲述。下面是一条通用的一般gcc命令

```bash
gcc $fullFileName -o $dir\"$fileNameWithoutExt\"\".out\" -W -Wall -O2 -std=c17 && $dir\"$fileNameWithoutExt\"\".out\""
```

如果想要链接自己写的头文件，使用一下命令即可，注意头文件要和C语言文件所处同一个文件夹

```bash
gcc $fullFileName <file_to_link> -o $dir\"$fileNameWithoutExt\"\".out\" -W -Wall -O2 -std=c17 && $dir\"$fileNameWithoutExt\"\".out\""
```

## SCode代码运行自动化

回忆之前我们编译、运行代码的过程，大概是需要在集成终端输入：

```bash
gcc $fullFileName -o $dir\"$fileNameWithoutExt\"\".out\" -W -Wall -O2 -std=c17 && $dir\"$fileNameWithoutExt\"\".out\""
```
这样真的十分不优雅，虽然很高级，那有没有方法让vs code的体验和visual studio差不多呢，甚至更符合直觉？就比如说visual Studio