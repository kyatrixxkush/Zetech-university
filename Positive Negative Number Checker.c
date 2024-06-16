//Author: Kimani Mukundi
//Reg No: BSCIT-01-0051/2024
//Positive Negative Number checker
//Description: To determine whether a number is positive or negative


#include <stdio.h>

int main() {
 double number;
 printf("Enter a number");
 scanf("%lf", &number);

 if(number < 0) {
    printf("The number is negative");
 }
 else if (number == 0) {
    printf("The number is 0");
 }
 else {
    printf("The number is positive");
 }
 return 0;

}
