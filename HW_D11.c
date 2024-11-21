#include    <stdio.h>

int convert(int n)
{
  if (n == 0) return 0;
  else return (1 + convert(n & (n - 1)));
}

int main() {
  int n;
  scanf("%d", &n);
  printf("%d", convert(n));
  return 0;
}
