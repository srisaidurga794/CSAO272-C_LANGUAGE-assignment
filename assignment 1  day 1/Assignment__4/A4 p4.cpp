#include <stdio.h>
#include <string.h>

struct Customer {
    int account_no;
    char name[50];
    float balance;
};

void print_customers(struct Customer customers[], int n) {
    printf("Customers with balance less than 100 Rs:\n");
    for(int i=0; i<n; i++) {
        if(customers[i].balance < 100) {
            printf("Account No: %d, Name: %s\n", customers[i].account_no, customers[i].name);
        }
    }
}

int main() {
    struct Customer customers[3];
    
    for(int i=0; i<3; i++) {
        printf("Enter customer %d account number: ", i+1);
        scanf("%d", &customers[i].account_no);
        printf("Enter customer %d name: ", i+1);
        scanf("%s", customers[i].name);
        printf("Enter customer %d balance: ", i+1);
        scanf("%f", &customers[i].balance);
    }
    
    print_customers(customers, 3);
    
    return 0;
}

