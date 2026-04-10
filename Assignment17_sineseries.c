#include<stdio.h>
int main(){
int i,N;
float x,term,sum=0;
printf("Enter the value of x (in degrees): ");
scanf("%f", &x);
printf("Enter the no.of terms: ");
scanf("%d",&N);
 x = x * 3.14159 / 180;
  term = x;  

    for(i = 1; i <= N; i++) {
        sum = sum + term;
        term = -term * x * x / ((2*i) * (2*i + 1));
    }
    printf("Sine series sum = %f", sum);
    return 0;
}                                                                                                                                                           
