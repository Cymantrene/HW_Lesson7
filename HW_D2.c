#include <stdio.h>


int recursiya_Sum(int n)
{
    if (n <= 1)
        return n;
    return n + recursiya_Sum(n - 1);
}


int main()
{
    int num;
    scanf("%d", &num);
    printf("%d ", recursiya_Sum(num));
    return 0;
}
