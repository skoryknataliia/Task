#include <stdio.h>
#include <stdbool.h> 
#include <string.h>

int main() {
    char firstName[50];
    char lastName[50];
    int age;
    bool isStudent;

  
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

    printf("\nInformation about user:\n");
    printf("Name: %s\n", firstName);
    printf("Last Name: %s\n", lastName);
    printf("Age: %d\n", age);
    printf("Student's Status: %s\n", isStudent ? "Yes" : "No");


}
