#include <stdio.h>

#define YES 0
#define NO  1
#define DIV 2

int simpl(int x,int div)
{
   if(x==1)
        return NO;
   if(div*div<=x)
       {
        if(x%div==0)
             return NO;
        else
           return simpl(x,++div);
        }
    else
        return YES;
}

int main()
{
  int num ;
  scanf("%d",&num);

  if(NO==simpl(num,DIV))
    printf("NO");
  else
    printf("YES");
}