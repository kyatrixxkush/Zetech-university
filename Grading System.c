//Author: Kimani Mukundi
//Reg No: BSCIT-01-0051/2024
//Grading system
//Description: To determine the grade one has scored

#include <stdio.h>

int main() {
    int score;
    printf("Enter your score: ");
    scanf("%d", &score);

    if (score > 100 || score < 0) {
        printf("Invalid score\n");
    } else if (score >= 0 && score < 40) {
        printf("E\n");
    } else if (score >= 40 && score < 50) {
        printf("D\n");
    } else if (score >= 50 && score < 60) {
        printf("C\n");
    } else if (score >= 60 && score < 70) {
        printf("B\n");
    } else if (score >= 70 && score <= 100) {
        printf("A\n");
    } else {
        printf("Also invalid\n");
    }

    return 0;
}
