//Author: Kimani Mukundi
//Reg No: BSCIT-01-0051/2024
//Even or Odd number checker
//Description: To determine whether a number is even or odd


#include <stdio.h>

int main() {
    int num;

    // Input number from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Using ternary operator to check even or odd
    (num % 2 == 0) ? printf("%d is even.\n", num) : printf("%d is odd.\n", num);

    return 0;
}
