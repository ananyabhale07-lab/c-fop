#include<stdio.h>
void main(){
    float salary,hra,ta,tax,net,gross;
    printf("Enter your salary");
    scanf("%f",&salary);
    hra=0.1*salary;
    ta=0.05*salary;
    tax=0.02*salary;
    gross=hra+ta+salary;
    net=gross-tax;
    printf("The gross salary is:%f",gross);
    printf("\nThe net salary is:%f",net);
}
