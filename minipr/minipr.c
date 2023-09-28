#include <stdio.h>
#include <string.h>


int main() {
    char name1[200];
    char name2[200];
    char firstName1[100];
    char lastName1[100];
    char firstName2[100];
    char lastName2[100];
    // Input names
    printf("Enter name of student 1 (LastName-FirstName): ");
    fgets(name1, sizeof(name1), stdin);
    name1[strcspn(name1, "\n")] = '\0'; // Remove trailing newline character
    
    printf("Enter name of student 2 (LastName-FirstName): ");
    fgets(name2, sizeof(name2), stdin);
    name2[strcspn(name2, "\n")] = '\0'; // Remove trailing newline character
    

    sscanf(name1, "%s %[^\n]", firstName1, lastName1);
    sprintf(name1, "%s %s", lastName1, firstName1);
    // convertName(name2);
    sscanf(name2, "%s %[^\n]", firstName2, lastName2);
    sprintf(name2, "%s %s", lastName2, firstName2);
    // Print names
    printf("Converted names:\n");
    printf("Student 1: %s\n", name1);
    printf("Student 2: %s\n", name2);
    
    return 0;
}
