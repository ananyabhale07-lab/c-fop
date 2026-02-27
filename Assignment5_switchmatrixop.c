#include<stdio.h>
 void main(){
    int a[2][2],b[2][2],c[2][2],d[2][2],i,j,cho;
    int is_saddle=0;
    printf("Enter the elements of the first matrix");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
           scanf("%d",&a[i][j]); 
        }
    }
    printf("Enter the elements of the second matrix");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
           scanf("%d",&b[i][j]); 
        }
    }
    printf("Enter 1 for addition.\nEnter 2 for subtraction\nEnter 3 to find saddle point of matrix a");
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
        printf("%d ", c[i][j]);
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
        printf("%d ", c[i][j]);
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
     printf("Saddle point is:%d",a[i][j]);
     is_saddle=1;
    } 
      }
     }
     if(!is_saddle){
      printf("No saddle point");
     }
   break;
    }

 }
