#include <stdio.h>
#include <stdbool.h> 
#include <string.h>

int main() {
    char firstName[50];
    char lastName[50];
    int age;
    bool isStudent;
    int number; 


    printf("Please, input number of students: ");
    scanf("%d", &number); 

    while (number > 0) {
        printf("Name: ");
        scanf("%s", firstName);

        printf("Last name: ");
        scanf("%s", lastName);

        printf("Age: ");
        scanf("%d", &age); 

        char studentStatus[4];
        printf("Are you a student? (yes/no): ");
        scanf("%s", studentStatus);


        if (strcmp(studentStatus, "yes") == 0 || strcmp(studentStatus, "Yes") == 0) { 
            isStudent = true;
        } else {
            isStudent = false;
        }

        // Виведення інформації про студента
        printf("\nInformation about user:\n");
        printf("Name: %s\n", firstName);
        printf("Last Name: %s\n", lastName);
        printf("Age: %d\n", age);
        printf("Student's Status: %s\n", isStudent ? "Yes" : "No");

        number--; 
    }

    return 0; 
}
