//Author: Kimani Mukundi
//Reg No: BSCIT-01-0051/2024
//Library system
//Description: To determine the days overdue and fine that should be paid accordingly


#include <stdio.h>
int main() {
   int book_id, due_date, return_date, days_overdue, fine;
   printf("Enter the book id due date and return date \n ");
   scanf("%d%d%d", &book_id, &return_date, &due_date);

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

    printf("The fine is %d and the days overdue are %d", fine, days_overdue);
    return 0;

}
