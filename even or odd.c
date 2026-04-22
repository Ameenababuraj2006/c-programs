#include <stdio.h>
int main() 
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    if(n%2==0)
        printf("Even");
    else
        printf("Odd");
    return 0;
}

/*
output:
Enter number: 55
Odd
  */
