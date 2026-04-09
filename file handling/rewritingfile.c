#include<stdio.h>
int main(){
    char a[10]="HELLO";
    FILE*fs;
    fs=fopen("source.txt","w");
    fwrite(a,1,10,fs);
    fclose(fs);
    return 0;

}