#include<stdio.h>
void main(){
    int a[3];
    int b[3];
    int c[3];
    printf("Enter the elements of a");
    int i;
    for(i=0;i<=2;i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the elements of b");
    for(i=0;i<=2;i++){
        scanf("%d", &b[i]);
    }
    for(i=0;i<=2;i++){
        c[i]=a[i]+b[i];
    }
    for(i=0;i<=2;i++){
        printf("\n%d",c[i]);
    }
}
