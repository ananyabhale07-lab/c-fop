#include<stdio.h>
 void main(){
    int a[2][2],b[2][2],c[2][2],d[2][2],i,j,cho;
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
    printf("Enter 1 for addition.\nEnter 2 for subtraction");
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
    }

 }