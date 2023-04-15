#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char stud_name[50];
    int mark1, mark2, mark3;
    int total_marks;
    float avg_marks;
};

void sort_students(struct Student students[], int num_students) {
    
    for(int i=0; i<num_students-1; i++) {
        for(int j=0; j<num_students-i-1; j++) {
            if(students[j].total_marks < students[j+1].total_marks) {
                struct Student temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }
}

int main() {
    int num_students;
    printf("Enter number of students: ");
    scanf("%d", &num_students);
    
    struct Student students[num_students];
    
    for(int i=0; i<num_students; i++) {
        printf("\nEnter details of student %d:\n", i+1);
        printf("Roll no: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf("%s", students[i].stud_name);
        printf("Marks in three subjects: ");
        scanf("%d %d %d", &students[i].mark1, &students[i].mark2, &students[i].mark3);
        
        students[i].total_marks = students[i].mark1 + students[i].mark2 + students[i].mark3;
        students[i].avg_marks = students[i].total_marks / 3.0;
    }
    
    
    sort_students(students, num_students);
    
    
    printf("\nRoll No\tName\t\tTotal Marks\tAverage Marks\n");
    for(int i=0; i<num_students; i++) {
        printf("%d\t%s\t\t%d\t\t%.2f\n", students[i].roll_no, students[i].stud_name, students[i].total_marks, students[i].avg_marks);
    }
    
    return 0;
}

