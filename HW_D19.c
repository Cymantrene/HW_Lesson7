#include <stdio.h>

int f_count();

int main() {

  int sum = f_count();
  printf("%d \n", sum);
  return 0;
}

int f_count() {
  int count = 0;
  char c;
  scanf("%c", & c);
  if (c == '.') 
  {
    return 0;
  }
  if (c == 'a') ++count;
  return count + f_count();
}