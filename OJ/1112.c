// 此贴终结，写了2个小时，真的不行
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float reverseString(char *str) {
  int len = strlen(str);
  for (int i = 0; i < len / 2; i++) {
    char temp = str[i];
    str[i] = str[len - i - 1];
    str[len - i - 1] = temp;
  }
  float a = atof(str);
  return a;
}

void convert(int n, char *binary) {
  if (n == 0) {
    float aaa = reverseString(binary);  // 反转字符串
                                        // printf("%s\n", binary); // 打印字符串
    // reverseString;
    printf("%.0f", aaa);
    return;
  }
  int remainder = n % 2;
  char remainderChar = remainder + '0';
  strncat(binary, &remainderChar, 1);
  convert(n / 2, binary);
}

int main() {
  int a;
  scanf("%d", &a);
  char binary[32] = "";
  if (a == 0) {
    printf("0\n");  // 直接处理0的情况
  } else {
    convert(a, binary);
  }
  return 0;
}