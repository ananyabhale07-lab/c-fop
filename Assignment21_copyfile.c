#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source, *destination;
    char src[100], dest[100];
    char ch;

    
    printf("Enter source file name: ");
    scanf("%s", src);

    printf("Enter destination file name: ");
    scanf("%s", dest);

    
    source = fopen(src, "r");
    if (source == NULL) {
        printf("Error: Cannot open source file.\n");
        exit(1);
    }

    
    destination = fopen(dest, "w");
    if (destination == NULL) {
        printf("Error: Cannot open destination file.\n");
        fclose(source);
        exit(1);
    }

    
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully.\n");

   
    fclose(source);
    fclose(destination);

    return 0;
}