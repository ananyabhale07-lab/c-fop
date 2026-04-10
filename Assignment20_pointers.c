#include<stdio.h>
void swapvalue(int a,int b);
void swapref(int *a,int *b);
void swapvalue(int a,int b){
    int temp;
    printf("Before Swap:%d\n",a);
    printf("Before Swap:%d\n",b);
    temp=a;
    a=b;
    b=temp;
    printf("after swap:%d\n",a);
    printf("after swap:%d\n",b);
}
void swapref(int *a,int *b){
    int temp;
    printf("Before Swap:%d\n",*a);
    printf("Before Swap:%d\n",*b);
    temp=*a;
    *a=*b;
    *b=temp;
    printf("after swap:%d\n",*a);
    printf("after swap:%d\n",*b);
}
int main(){
    int x,y,cho;
    printf("Enter the first number:");
    scanf("%d",&x);
    printf("Enter the second number:");
    scanf("%d",&y);
    printf("Enter 1 to swap by value and 2 to swap by reference");
    scanf("%d",&cho);
    switch(cho){
        case 1:
        swapvalue(x, y);
        break;
        case 2:
        swapref(&x,&y);        
        break;
        default:
        printf("Enter valid choice");
        break;
    }
    return 0;
}