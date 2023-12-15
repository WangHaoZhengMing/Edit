在C语言中，`time.h`是一个头文件，提供了一些与时间相关的函数和类型定义。下面是一些常见的`time.h`的用法示例：

1. 获取当前时间：
```c


```
上述代码中，`time(&currentTime)`函数用于获取当前时间的秒数，并将其存储在`currentTime`变量中。然后，`ctime(&currentTime)`函数将时间转换为可读的字符串格式，并通过`printf`函数打印出来。

2. 格式化时间：
```c
#include <stdio.h>
#include <time.h>

int main() {
    time_t currentTime;
    struct tm *timeInfo;
    char buffer[80];

    time(&currentTime);
    timeInfo = localtime(&currentTime);
    strftime(buffer, 80, "当前时间：%Y-%m-%d %H:%M:%S", timeInfo);
    printf("%s\n", buffer);
    return 0;
}
```
上述代码中，`localtime(&currentTime)`函数将当前时间转换为本地时间，并将结果存储在`timeInfo`结构体中。然后，`strftime`函数根据指定的格式将时间格式化为字符串，并将结果存储在`buffer`中。最后，通过`printf`函数打印出来。

3. 计算时间差：
```c
#include <stdio.h>
#include <time.h>

int main() {
    time_t startTime, endTime;
    double timeDiff;

    startTime = time(NULL);
    // 执行一些操作...
    endTime = time(NULL);

    timeDiff = difftime(endTime, startTime);
    printf("操作执行时间：%f秒\n", timeDiff);
    return 0;
}
```
上述代码中，`time(NULL)`函数用于获取当前时间的秒数，并将其存储在`startTime`和`endTime`变量中。在执行一些操作后，再次调用`time(NULL)`函数获取结束时间。然后，`difftime`函数计算两个时间之间的差异，并将结果存储在`timeDiff`变量中。最后，通过`printf`函数打印出执行时间。

这些示例展示了`time.h`头文件的一些常见用法，但`time.h`还提供了其他函数和类型，可以根据具体需求进行进一步学习和使用。