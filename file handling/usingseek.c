#include<stdio.h>
int main(){
    FILE*f;
    f=fopen("source.txt","w");
    fputs("hello world",f);
    fseek(f,6,SEEK_SET);
    fputs("India",f);
    fclose(f);
    return 0;
    
}