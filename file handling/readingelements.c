#include<stdio.h>
int main(){
    char buffer[20]; //buffer to store data
    FILE*stream;
    stream=fopen("source.txt","r");
    int count=fread(&buffer,sizeof(char),10,stream);
    fclose(stream);
    printf("Data read from the file:%s\n",buffer);
    printf("Elements read:%d",count);
    return 0;
}