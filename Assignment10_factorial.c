#include<stdio.h>
void main(){
    int cho;
    int a,b,i;
    float result;
    long int fact=1;
    printf("Press:");
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\n5.Power");
    printf("\n6.Factorial");
    printf("\nEnter your choice:");
    scanf("%d",&cho);
    switch(cho){
        case 1:
        printf("Enter two numbers:");
        scanf("%d%d",&a,&b);
        printf("Addition is:%d",a+b);
        break;
        case 2:
        printf("Enter two numbers:");
        scanf("%d%d",&a,&b);
        printf("Subtraction is:%d",a-b);
        break;
        case 3:
        printf("Enter two numbers:");
        scanf("%d%d",&a,&b);
        printf("Multiplication is:%d",a*b);
        break;
        case 4:
        printf("Enter two numbers:");
        scanf("%d%d",&a,&b);
        if(b!=0){
            printf("Division is:%f",(float)a/b);
        }
        else{
            printf("Division by 0 is not possible");
        }
        break;
        case 5:
        printf("Enter base and exponent:");
        scanf("%d%d",&a,&b);
        result=1;
        for(i=1;i<=b;i++){
            result=result*i;
            printf("The power is:%f",result);
        }
        break;
        case 6:
        printf("Enter a number:");
        scanf("%d",&a);
        for(i=1;i<=a;i++){
            fact=fact*i;
            printf("Fractorial is:%d",fact);
        }
        break;
        

    }

    
}
