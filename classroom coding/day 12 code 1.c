#include <stdio.h>
int main() {
    int days;
    int fine = 0;
    printf("Enter the number of days late: ");
    if (scanf("%d", &days) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    if (days < 0) {
        printf("Invalid entry. Days late cannot be negative.\n");
    }
    
    else if (days > 30) {
        printf("Membership Cancelled.\n");
    } 
    else if (days <= 5) {
        fine = days * 2;
        printf("Total Fine: ₹%d\n", fine);
    } 

    else if (days <= 10) 
	{
        fine = (5 * 2) + ((days - 5) * 4);
        printf("Total Fine: ₹%d\n", fine);
    } 
    else 
	{
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Total Fine: ₹%d\n", fine);
    }
}