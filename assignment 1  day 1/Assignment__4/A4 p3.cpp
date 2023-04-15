#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Student {
    char name[50];
    int roll_no;
    char birthdate[11]; // format: yyyy-mm-dd
    char admission_date[11]; // format: yyyy-mm-dd
};

int calculate_age(char *birthdate, char *admission_date) {
    struct tm birth_tm = {0}, admission_tm = {0};
    time_t birth_time, admission_time;
    
    sscanf(birthdate, "%d-%d-%d", &birth_tm.tm_year, &birth_tm.tm_mon, &birth_tm.tm_mday);
    sscanf(admission_date, "%d-%d-%d", &admission_tm.tm_year, &admission_tm.tm_mon, &admission_tm.tm_mday);
    
    birth_tm.tm_year -= 1900;
    birth_tm.tm_mon -= 1;
    birth_time = mktime(&birth_tm);
    
    admission_tm.tm_year -= 1900;
    admission_tm.tm_mon -= 1;
    admission_time = mktime(&admission_tm);
    
    double age_in_seconds = difftime(admission_time, birth_time);
    int age_in_years = (int)(age_in_seconds / (60 * 60 * 24 * 365.25));
    
    return age_in_years;
}

int main() {
    struct Student student;
    
    printf("Enter student name: ");
    fgets(student.name, 50, stdin);
    student.name[strcspn(student.name, "\n")] = '\0'; 
    
    printf("Enter student roll number: ");
    scanf("%d", &student.roll_no);
    
    printf("Enter student birthdate (yyyy-mm-dd): ");
    scanf("%s", student.birthdate);
    
    printf("Enter student admission date (yyyy-mm-dd): ");
    scanf("%s", student.admission_date);
    
    int age_at_admission = calculate_age(student.birthdate, student.admission_date);
    
    printf("\nStudent Information:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.roll_no);
    printf("Birthdate: %s\n", student.birthdate);
    printf("Admission Date: %s\n", student.admission_date);
    printf("Age at Admission: %d years\n", age_at_admission);
    
    return 0;
}

