//Author: Kimani Mukundi
//Reg No: BSCIT-01-0051/2024
//Electricity bill counter
//Description: To calculate the electricity bill of a customer

#include <stdio.h>

int main() {
    int CustomerId, UnitConsumed;
    double bill, surcharge;
    char CustomerName[50];

    printf("Enter customer ID: ");
    scanf("%d", &CustomerId);
    printf("Enter customer name: ");
    scanf("%s", CustomerName);
    printf("Enter units consumed: ");
    scanf("%d", &UnitConsumed);

    if(UnitConsumed <= 199) {
        bill = UnitConsumed * 1.20;
    } else if(UnitConsumed >= 200 && UnitConsumed < 400) {
        bill = UnitConsumed * 1.50;
    } else if(UnitConsumed >= 400 && UnitConsumed < 600) {
        bill = UnitConsumed * 1.80;
    } else {
        bill = UnitConsumed * 2.00;
    }

    if(bill > 400) {
        surcharge = bill * 0.15;
        bill = bill + surcharge;
    }

    if(bill < 100) {
        bill = 100;
    }

    float chargePerUnit;
    if(UnitConsumed <= 199) {
        chargePerUnit = 1.20;
    } else if(UnitConsumed >= 200 && UnitConsumed < 400) {
        chargePerUnit = 1.50;
    } else if(UnitConsumed >= 400 && UnitConsumed < 600) {
        chargePerUnit = 1.80;
    } else {
        chargePerUnit = 2.00;
    }

    printf("\nCustomer ID: %d\n", CustomerId);
    printf("Customer Name: %s\n", CustomerName);
    printf("Units Consumed: %d\n", UnitConsumed);
    printf("Charges per Unit: %.2f\n", chargePerUnit);
    printf("Total Amount to Pay: Ksh %.2lf\n", bill);

    return 0;
}
