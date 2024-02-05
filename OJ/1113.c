#include <stdio.h>
int main() {
  int a = 22;
  int* p = &a;
  printf("%d\n", p);
  printf("%d\n", a);
  printf("%d\n", *p);
  
  return 0;
}