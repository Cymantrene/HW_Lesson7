#include <stdio.h>

#include <stdlib.h>

void ft_loop(int i, int number_limit) {
  printf("%d ", i);
  if (i == number_limit)
    return;
  i++;
  ft_loop(i, number_limit);
}

int main() {
  int number_limit;
  scanf("%d", & number_limit);
  ft_loop(1, number_limit);

  return 0;
}
