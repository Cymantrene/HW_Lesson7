#include<stdio.h>

void reccur_c(int max_num, int num) {
    int already_printed = (num-1)*num / 2;
    for (int i = 0; i < num && already_printed + i < max_num; i++)
    {
        printf("%d ", num);
    }

    if (already_printed + num < max_num){
        reccur_c(max_num, num + 1);
    }
}

int main(int argc, char *argv[])
{
    int n;
    scanf("%d", &n);
    reccur_c(n, 1);
}
