#include<stdio.h>

int rec(int n);
int main(void)
{
    int n;
    scanf("%d",&n);
    if(rec(n))
    printf("YES\n");
    else
    printf("NO\n");
    return 0;
}
int rec(int n)
{
    if(n==2)
    return 1;
    if(n==1)
    return 1;
    if(n%2)
    return 0;
    else
    return rec(n/2);
}
