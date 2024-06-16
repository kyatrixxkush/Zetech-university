//Author: Kimani Mukundi
//Reg No: BSCIT-01-0051/2024
//Loan eligibility program
//Description: To determine whether a person qualifies for a loan

#include <stdio.h>

int main() {
    int age;
    float annualIncome;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income in Ksh: ");
    scanf("%f", &annualIncome);

    if (age > 21 && annualIncome >= 21000) {
        printf("Congratulations, you qualify for a loan!\n");
    } else {
        printf("Unfortunately, we are not able to give you a loan.\n");
    }

    return 0;
}
