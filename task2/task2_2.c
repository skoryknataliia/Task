#include <stdio.h>
#include <stdbool.h> 
#include <string.h> 

struct User {
    char firstName[50]; 
    char lastName[50];  
    int age;            
    bool isStudent;     
};

int main() {
    int numUsers;

    printf("Enter number of users: ");
    scanf("%d", &numUsers);

    // Масив користувачів
    struct User users[numUsers];

    // Введення даних для кожного користувача
    for (int i = 0; i < numUsers; i++) {
        printf("\nEnter the user information %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", users[i].firstName);  

        printf("Last name: ");
        scanf("%s", users[i].lastName);  

        printf("Age: ");
        scanf("%d", &users[i].age);  

 
        char isStudentInput[4]; 
        printf("Are you a student? (yes/no): ");
        scanf("%s", isStudentInput);

       
        if (strcmp(isStudentInput, "yes") == 0 || strcmp(isStudentInput, "Yes") == 0) {
            users[i].isStudent = true;
        } else if (strcmp(isStudentInput, "no") == 0 || strcmp(isStudentInput, "No") == 0) {
            users[i].isStudent = false;
        } else {
            printf("Невірний ввід! Статус не змінено.\n");
            users[i].isStudent = false; 
        }
    }


    printf("\n User information \n");
    for (int i = 0; i < numUsers; i++) {
        printf("\nUser %d:\n", i + 1);
        printf("Name: %s\n", users[i].firstName);
        printf("Last name: %s\n", users[i].lastName);
        printf("Age: %d\n", users[i].age);
        printf("Student status: %s\n", users[i].isStudent ? "Yes" : "No");
    }


}
