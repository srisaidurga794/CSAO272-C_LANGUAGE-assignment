#include <stdio.h>
#include <string.h>

struct Employee {
    int eno;
    char ename[50];
    float salary;
};

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    
    struct Employee employees[n];
    
    
    for(int i=0; i<n; i++) {
        printf("Enter details of employee %d:\n", i+1);
        printf("Employee number: ");
        scanf("%d", &employees[i].eno);
        printf("Employee name: ");
        scanf("%s", employees[i].ename);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }
    
    
    int max_index = 0;
    for(int i=1; i<n; i++) {
        if(employees[i].salary > employees[max_index].salary) {
            max_index = i;
        }
    }
    
    
    printf("\nDetails of employee with the highest salary:\n");
    printf("Employee number: %d\n", employees[max_index].eno);
    printf("Employee name: %s\n", employees[max_index].ename);
    printf("Salary: %.2f\n", employees[max_index].salary);
    
    return 0;
}

