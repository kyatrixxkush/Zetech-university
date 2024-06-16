//Author: Kimani Mukundi
//Reg No: BSCIT-01-0051/2024
// INTEREST CALCULATION
//Description: To determine the interest accrued on a given amount

#include <stdio.h>

int main() {
    // Declare variables
    float principal, rate, time, interest;

    // Prompting the user to enter the principal amount
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    // Prompting the user to enter the rate of interest per year
    printf("Enter the rate of interest per year (in percent): ");
    scanf("%f", &rate);

    // Prompting the user to enter the time period in years
    printf("Enter the time period in years: ");
    scanf("%f", &time);

    // Calculate simple interest
    interest = (principal * rate * time) / 100;

    // Print the result
    printf("\nPrincipal: $%.2f\n", principal);
    printf("Rate of Interest: %.2f%% per year\n", rate);
    printf("Time Period: %.2f years\n", time);
    printf("Simple Interest: Ksh %.2f \n", interest);

    return 0;
}
