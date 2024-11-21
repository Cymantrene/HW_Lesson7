#include <stdio.h>

#include <stdlib.h>

void Perevod(int);

int main() {

  int x;

  scanf("%d", & x);

  Perevod(x);

  return 0;
}

void Perevod(int x) {
  printf("%d ", x % 10);

  if (x > 9)
    Perevod(x / 10);

}
