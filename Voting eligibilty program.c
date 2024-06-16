//Author: Kimani Mukundi
//Reg No: BSCIT-01-0051/2024
//Voting eligibility program
//Description: To determine whether a person qualifies to vote

#include <stdio.h>

int main() {
    int age;
    char citizen_status;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you a Kenyan citizen? (Y/N): ");
    scanf(" %c", &citizen_status);

    if (age >= 18 && (citizen_status == 'Y' || citizen_status == 'y')) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}
