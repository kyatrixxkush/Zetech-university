//Author: Kimani Mukundi
//Reg No: BSCIT-01-0051/2024
//Divisibility of 5 checker
//Description: To determine whether a number is divisible by 5

#include <stdio.h>

int main() {
    int number;

    // Input number
    printf("Enter a number to check if it is divisible by 5: ");
    scanf("%d", &number);

    // Check divisibility
    if (number % 5 == 0) {
        printf("%d is divisible by 5.\n", number);
    } else {
        printf("%d is not divisible by 5.\n", number);
    }

    return 0;
}
