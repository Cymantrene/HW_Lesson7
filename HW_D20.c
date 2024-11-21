#include <stdio.h>
#include <stdlib.h>

int power(int x, int n)
{
    if(n == 0)
        return 1;
    else
        return x*power(x, n-1);
}

int main()
{
    int n, p, rez;

    scanf("%d%d", &n, &p);
    rez = power(n, p);
    printf("%d\n", rez);

    return 0;
}
