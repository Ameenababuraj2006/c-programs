#include <stdio.h>
int addDigits(int num) {
    while (num >= 10) {
        int sum = 0;

        while (num > 0) {
            sum += num % 10; 
            num /= 10;        
        }
        num = sum;
    }
    return num;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = addDigits(num);
    printf("Single digit result: %d", result);
    return 0;
}

/*
output:
Enter a number: 147
Single digit result: 3
  */
