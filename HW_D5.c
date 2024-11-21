#include <stdio.h>
#include <stdlib.h>

int find(int number)
{
    if (number == 0)
        return 0;
    else
        return (number % 2 + 10 *
                find(number / 2));
}


int main()
{
    int number;
    scanf("%d", &number);
    printf("%d", find(number));
    return 0;
}

/*
int find (int number){
    if(number > 1)
    find(number /2);
    printf("%d", number % 2);
    return number;
}


int main()
{
    int number;
    scanf("%d", &number);
    
    find(number);
    return 0;
}
*/


