#include <stdio.h>
#include <inttypes.h>
#define  INT_MIN_32   -2147483647-1


void func(int max)
{
    int input;
    scanf("%d",&input);
    if(input>max) max=input;
    if((input==0)||(input<0)) printf("%d\n",max);
    else
    {
        func(max);

    }
}
int main(int argc,char* argv[])
{
    func(INT_MIN_32);
    return 0;
}



