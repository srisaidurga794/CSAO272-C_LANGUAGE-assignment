#include <stdio.h>

int main() {
    int amount, notes;
    printf("Enter the amount: ");
    scanf("%d", &amount);

    // Calculation for 500 notes
    notes = amount / 500;
    amount %= 500;
    if(notes != 0)
        printf("Rs. 500 notes: %d\n", notes);

    // Calculation for 100 notes
    notes = amount / 100;
    amount %= 100;
    if(notes != 0)
        printf("Rs. 100 notes: %d\n", notes);

    // Calculation for 50 notes
    notes = amount / 50;
    amount %= 50;
    if(notes != 0)
        printf("Rs. 50 notes: %d\n", notes);

    // Calculation for 20 notes
    notes = amount / 20;
    amount %= 20;
    if(notes != 0)
        printf("Rs. 20 notes: %d\n", notes);

    // Calculation for 10 notes
    notes = amount / 10;
    amount %= 10;
    if(notes != 0)
        printf("Rs. 10 notes: %d\n", notes);

    // Calculation for 5 notes
    notes = amount / 5;
    amount %= 5;
    if(notes != 0)
        printf("Rs. 5 notes: %d\n", notes);

    // Calculation for 2 notes
    notes = amount / 2;
    amount %= 2;
    if(notes != 0)
        printf("Rs. 2 notes: %d\n", notes);

    // Calculation for 1 notes
    notes = amount / 1;
    if(notes != 0)
        printf("Rs. 1 notes: %d\n", notes);

    return 0;
}

