#include<stdio.h>
#include<string.h>
void main(){
    char str1[50],str2[50],str3[50];
    int i,j,k,s;
    printf("Enter string 1: ");
    scanf("%s",str1);
    printf("Enter string 2: ");
    scanf("%s",str3);
    //Length of string
    s=strlen(str1);
    printf("Length of the string 1 is:%d\n",s);
    //Reverse of a string
    j=0;
    for(i=s-1;i>=0;i--){
        str2[j]=str1[i];
        j++;
    }
    str2[j]='\0';
    printf("Reversed string: %s\n", str2);
    //Check for palindrome
    if(strcmp(str1,str2)==0){
    printf("String is a Palindrome\n");
    }
    else{
    printf("String is NOT a Palindrome\n");
    }
    //Comparing two strings
    if(strcmp(str1, str3) == 0){
        printf("Both strings are Equal\n");
    }
    else{
        printf("Strings are NOT Equal\n");
    }
    //Checking for substring
    if(strstr(str1, str3) != NULL){
        printf("'%s' is a substring of '%s'\n", str3, str1);
     }
    else{
        printf("'%s' is NOT a substring of '%s'\n", str3, str1);
    }



}
