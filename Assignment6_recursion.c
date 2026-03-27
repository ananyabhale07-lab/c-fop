#include<stdio.h>
 //with recursion
    unsigned long long factorial(int n){
        if(n==0||n==1){
            return 1;
        }
        else{
            return n*factorial(n-1);
        }
    }

int main(){
    //WITHOUT RECURSION
    int n,i;
    unsigned long long fact=1;
    printf("Enter a number");
    scanf("%d",&n);
    if(n<0){
        printf("Factorial is not defined for negative numbers");
    }
    else{
        for(i=1;i<=n;i++){
            fact=fact*i;
        }
       printf("Factorial of %d without recursion=%llu\n",n,fact);
       printf("Factorial of %d with recursion=%llu\n",n,factorial(n));
    }

    return 0;
}
