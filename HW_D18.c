#include <stdio.h>

void f(int n) {
  if (n > 9) f(n / 10);
  printf("%d ", n % 10);
}

int main(void) {
  int num;

  scanf("%d", & num);
  f(num);
  return 0;
}
