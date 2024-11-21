#include <stdio.h>
#include <stdlib.h>
#define  ONE 1

void ft_loop(int num, int one) {
  printf("%d ", num);
  if (num==one)
    return;
  num--;
  ft_loop(num, 1);
}

int main() {
  int num;
  scanf("%d", & num);
  ft_loop(num, ONE);

  return 0;
}
