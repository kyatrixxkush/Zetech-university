//Author: Kimani Mukundi
//Reg No: BSCIT-01-0051/2024
//Discount checker
//Description: To determine whether a person qualifies for a discount

#include <stdio.h>

int main() {
    float totalAmount, discountedAmount;

    printf("Enter the total amount spent: ");
    scanf("%f", &totalAmount);

    if (totalAmount > 5000) {
        discountedAmount = totalAmount * 0.9;
        printf("You are eligible for a 10%% discount!\n");
        printf("Original amount: %.2f\n", totalAmount);
        printf("Discounted amount: %.2f\n", discountedAmount);
    } else {
        printf("You are not eligible for any discount.\n");
        printf("Total amount: %.2f\n", totalAmount);
    }

    return 0;
}
