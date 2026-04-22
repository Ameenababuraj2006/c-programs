#include <stdio.h>
int main() 
{
    int a,b;
    char d;
    printf("enter 2 numbers:");
    scanf("%d%d",&a,&b);
    printf("enter an arithmetic operator:");
    scanf(" %c",&d);
    switch(d)
    {
        case'+':printf("result=%d",a+b);
        break;
        case'-':printf("result=%d",a-b);
        break;
        case'*':printf("result=%d",a*b);
        break;
        case'/':printf("result=%d",a/b);
        break;
        default:printf("invalid operator");
    }
        return 0;
}
/*
output:
enter 2 numbers:9
3
enter an arithmetic operator:+
result=12
enter 2 numbers:9
3
enter an arithmetic operator:-
result=6
enter 2 numbers:9
3
enter an arithmetic operator:*
result=27
enter 2 numbers:9
3
enter an arithmetic operator:/
result=3
  */
