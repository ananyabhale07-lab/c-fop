#include<stdio.h>
void main(){
int num1,num2,gcd,sd1=0,sd2=0,i;
printf("Enter two numbers");
scanf("%d%d",&num1,&num2);
//for smallest divisor
for(i=2;i<=num1;i++){
    if(num1%i==0){
        sd1=i;
        break;
    }
}
for(i=2;i<=num2;i++){
    if(num2%i==0){
        sd2=i;
        break;
    }
}
for(i=1;i<=num1&&i<=num2;i++){
    if(num1%i==0&&num2%i==0){
        gcd=i;
    }
}
printf("The smallest divisor of num 1 is %d\n",sd1);
printf("The smallest divisor of num 2 is %d\n",sd2);
printf("The greatest common divisor of both the numbers is %d\n",gcd);
}
