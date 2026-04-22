#include <stdio.h>
int isPalindrome(int x) 
{
    if (x < 0) return 0;  
    int original = x;
    int reversed = 0;
    while (x != 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }
    return original == reversed;
}
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (isPalindrome(num))
        printf("True (Palindrome)\n");
    else
        printf("False (Not Palindrome)\n");
    return 0;
}

/*
output:
Enter an integer: 131
True (Palindrome)
*/
