#include<stdio.h>
struct student{
char name[10];
int roll_no;
int m1,m2;
float results;
};
void main(){
 struct student s[3];
  int i;
  for(i=0;i<3;i++){
printf("Enter your name");
  scanf("%s",s[i].name);
printf("Enter your roll no");
  scanf("%d",&s[i].roll_no);
printf("Enter your marks for subject 1");
  scanf("%d",&s[i].m1);
printf("Enter your marks for subject 2");
     scanf("%d",&s[i].m2);
  s[i].results=s[i].m1+s[i].m2/100;
  }
for(i=0;i<3;i++){
printf("Your name is:%s",s[i].name);
printf("Your roll no is:%d",s[i].roll_no);
printf("Your marks for subject 1 and 2 are:%d and %d",s[i].m1,s[i].m2);
printf("Your result is:%.2f", s[i].results);
}
}

