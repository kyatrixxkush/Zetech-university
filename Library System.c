//Author: Kimani Mukundi
//Reg No: BSCIT-01-0051/2024
//Library system
//Description: To determine the days overdue and fine accordingly

#include <stdio.h>
int main() {
   int book_id, due_date, return_date, days_overdue, fine;
   printf("Enter the book id: \n");
   scanf("%d", &book_id);

   printf("Enter the return date: \n");
   scanf("%d", &return_date);

   printf("Enter the due date: \n");
   scanf("%d", &due_date);

   days_overdue = return_date - due_date;
   if (days_overdue >= 1 && days_overdue <= 7 ) {
         fine = days_overdue * 20;
       }

    else if (days_overdue >= 8 && days_overdue <= 14 ) {
         fine = days_overdue * 50;
       }

    else if (days_overdue >= 15 ) {
         fine = days_overdue * 100;
       }

    printf("The days overdue is %d \n", days_overdue);
    printf("The fine is %d ", fine);
    return 0;

}
