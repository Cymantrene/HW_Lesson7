#include <stdio.h>



void Nechet();

int main(int argc, char *argv[])
{

    Nechet();
    return 0;
}

void Nechet()
{
    int x;
    scanf("%d", &x);
    if ((x % 2) != 0)
        printf("%d ", x);
    if (x != 0)
        Nechet();
}
