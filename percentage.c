#include<stdio.h>
void main(){
    float course1,course2,course3,course4,course5;
    float total;
    float percentage;
    printf("Enter your marks for the five courses");
    scanf("%f%f%f%f%f",&course1,&course2,&course3,&course4,&course5);
    if(course1>=40&&course2>=40&&course3>=40&&course4>=40&&course5>=40){
        total=course1+course2+course3+course4+course5;
        percentage=(total/500)*100;
        printf("Result:PASS\n");
        printf("Total marks:%f\n",total);
        printf("Percentage:%f\n",percentage);
        if(percentage>=75){
            printf("Distinction");
        }
        else if(percentage>=60){
            printf("First division");
        }
        else if(percentage>=50){
            printf("Second division");
        }
        else{
            printf("Third division");
        }
    }
    else{
        printf("Result:FAIL");
        
    }
    
}
