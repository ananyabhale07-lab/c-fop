#include<stdio.h>
void main(){
    int num,i;
    int isprime=1;
    long long factorial=1;
    printf("Enter a number");
    scanf("%d",&num);
    if(num>=0){
        for(i = 1; i * i <= num; i++)
        printf("Square Root (approx) = %d\n", i - 1);
    } 
    else {
        printf("Square Root not defined for negative numbers\n");
    }
    printf("Square = %d\n", num * num);
    printf("Cube = %d\n", num * num * num);
     if(num <= 1)
        isprime = 0;
    else {
        for(i = 2; i < num; i++) {
            if(num % i == 0) {
                isprime = 0;
                break;
            }
        }
    }

    if(isprime)
        printf("The number is Prime\n");
    else
        printf("The number is Not Prime\n");

if(num < 0) {
        printf("Factorial not defined for negative numbers\n");
    } else {
        for(i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("Factorial = %lld\n", factorial);
    }
 printf("Prime Factors: ");
    int temp = num;

    for(i = 2; i <= temp; i++) {
        while(temp % i == 0) {
            printf("%d ", i);
            temp = temp / i;
        }
    }

    printf("\n");

    return 0;
}





    
