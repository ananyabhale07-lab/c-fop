#include<stdio.h>
void main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=0;i<=10;i++){
        printf("\n%d",n*i);
    }
}
