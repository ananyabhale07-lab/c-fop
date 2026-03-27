#include<stdio.h>
#include<string.h>
struct EMPLOYEE {
    char name[50];
    char designation[100];
    char Gender;
    int DOJ;
    float salary;
};
void totalemployees(int n){
    printf("Total number of employees is: %d\n",n);
}
void gendercount(struct EMPLOYEE e[],int n){
    int male=0,female=0,i;
    for(i=0;i<n;i++){
        if(e[i].Gender=='M'){
            male++;
        }
        else if(e[i].Gender=='F'){
            female++;
        }
    }
    printf("No.of Male employees:%d\n",male);
    printf("No.of Female employee:%d\n",female);
}
void highSalary(struct EMPLOYEE e[], int n) {
    int i;
    printf("Employees with salary > 10000:\n");

    for(i = 0; i < n; i++) {
        if(e[i].salary > 10000) {
            printf("%s\n", e[i].name);
        }
    }
}
void asstManager(struct EMPLOYEE e[], int n) {
    int i;
    printf("Employees with designation Asst Manager:\n");

    for(i = 0; i < n; i++) {
        if(strcmp(e[i].designation, "Asst Manager") == 0) {
            printf("%s\n", e[i].name);
        }
    }
}


void main() {
    struct EMPLOYEE e[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input
    for(i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i+1);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Designation: ");
        scanf("%s", e[i].designation);
        
        printf("Gender (M/F): ");
        scanf(" %c", &e[i].Gender);

        printf("Year of Joining: ");
        scanf("%d", &e[i].DOJ);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }
    totalemployees(n);
    gendercount(e, n);
    highSalary(e, n);
    asstManager(e, n);
}
