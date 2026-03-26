#include <stdio.h>
#include <string.h>

void displayMenu() {
    printf("OPERATIONS MENU\n");
    printf("1. Length of string\n");
    printf("2. Copy string\n");
    printf("3. Concatenate strings\n");
    printf("4. Compare strings\n");
    printf("5. Reverse string\n");
    printf("0. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    char str1[100], str2[100], str3[100];
    int choice;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    while(1) {
        displayMenu();
        scanf("%d", &choice);

        if(choice == 0) {
            printf("Exiting program...\n");
            break;
        }

        switch(choice) {
            case 1:
                printf("Length of string1: %lu\n", strlen(str1));
                break;

            case 2:
                strcpy(str3, str1);
                printf("Copied string: %s\n", str3);
                break;

            case 3:
                strcpy(str3, str1);
                strcat(str3, str2);
                printf("Concatenated string: %s\n", str3);
                break;

            case 4:
                if(strcmp(str1, str2) == 0)
                    printf("Strings are equal\n");
                else
                    printf("Strings are not equal\n");
                break;

            case 5: {
                int i, len = strlen(str1);
                for(i = 0; i < len; i++) {
                    str3[i] = str1[len - i - 1];
                }
                str3[len] = '\0';
                printf("Reversed string: %s\n", str3);
                break;
            }

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

