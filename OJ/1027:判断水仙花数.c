#include <stdio.h>

int main() {
  int num;

  // 从标准输入读取一个三位数
  printf("请输入一个三位数：");
  scanf("%d", &num);

  // 提取百位、十位和个位数字
  int hundreds = num / 100;
  int tens = (num % 100) / 10;
  int units = num % 10;

  // 判断是否为水仙花数并输出相应信息
  if (num == (hundreds * hundreds * hundreds + tens * tens * tens +
              units * units * units)) {
    printf("yes\n");
  } else {
    printf("no\n");
  }

  return 0;
}