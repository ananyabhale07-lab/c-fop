#include<stdio.h>
 void main(){
    float a[2][2],b[2][2],c[2][2],d[2][2];
    int i,j,cho;
    int is_saddle=0;
    float inv[2][2];
    float det;
    printf("Enter the elements of the first matrix");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
           scanf("%f",&a[i][j]); 
        }
    }
    printf("Enter the elements of the second matrix");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
           scanf("%f",&b[i][j]); 
        }
    }
    printf("Enter 1 for addition.\nEnter 2 for subtraction\nEnter 3 to find saddle point of matrix a\nEnter 4 for the inverse of matrix a\nEnter 5 to check if matrix a is magic square or not");
    scanf("%d",&cho);
    switch(cho){
        case 1:
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("%f ", c[i][j]);
    }
    printf("\n");
}
break;
case 2:
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                c[i][j]=a[i][j]-b[i][j];
            }
        }
        for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("%f ", c[i][j]);
    }
    printf("\n");
}
break;
     case 3:
     for(i=0;i<2;i++){
      for(j=0;j<2;j++){
      int issmallestinrow=1;
      int islargestincol=1;
      
        for(int k=0;k<2;k++){
         if(a[i][j]>a[i][k]){
         issmallestinrow=0;
         break;
        }
       }
       for(int k=0;k<2;k++){
        if(a[i][j]<a[k][j]){
         islargestincol=0;
         break;
        }
       }
    if(issmallestinrow && islargestincol){
     printf("Saddle point is:%f",a[i][j]);
     is_saddle=1;
    } 
      }
     }
     if(!is_saddle){
      printf("No saddle point");
     }
   break;
     case 4:
     det=a[0][0]*a[1][1]-a[0][1]*a[1][0];
     if(det!=0){
      inv[0][0]=a[1][1]/det;
      inv[0][1]=-a[0][1]/det;
      inv[1][0]=-a[1][0]/det;
      inv[1][1]=a[0][0]/det;
      printf("The inverse matrix of a is:\n");
      for(i=0;i<2;i++){
       for(j=0;j<2;j++){
        printf("%.2f ",inv[i][j]);
       }
       printf("\n");
      }
     }
     else{
      printf("Inverse doesn't exist");
     }
     break;
     case 5:{
     float sum=a[0][0]+a[0][1];
     if(sum==a[1][0]+a[1][1] && sum==a[0][0]+a[1][0] && sum==a[0][1]+a[1][1] && sum==a[0][0]+a[1][1] && sum==a[0][1]+a[1][0]){
      printf("Matrix a is a magic square");
     }
     else{
      printf("Matrix a is not magic square");
     }
      break;
     }
    }

 }
