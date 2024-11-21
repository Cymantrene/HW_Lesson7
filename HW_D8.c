#include <stdio.h>

#include <stdlib.h>

void ft_loop(int num1, int num2) {
  printf("%d ", num1);
  if (num1 == num2)
    return;
  num1++;
  ft_loop(num1, num2);
}

void Perevod(int num1, int num2) {
  printf("%d ", num1);
  if (num1 == num2)
    return;
  num1--;
  Perevod(num1, num2);

}

int main() {
  int num1, num2;
  scanf("%d", & num1);
  scanf("%d", & num2);

  if (num2 > num1) {
    ft_loop(num1, num2);
  } else {
    Perevod(num1, num2);
  }
  return 0;
}
