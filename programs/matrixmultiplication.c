//
//  matrixmultiplication.c
//  programs
//
//  Created by Arnab Sen on 03/03/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>


void matrixmult(int a[50][50],int b[50][50],int d[50][50],int row1, int col1, int col2)
{   static int i=0,k=0,j=0;
    
    if (k==col1&&j==col2&&i==row1&&i<50) {
        d[row1][col2]=d[i][j]+a[i][k]*b[k][j];
    }
    else{
        if (k==col1){d[i][j]=d[i][j]+a[i][k]*b[k][j];k=0;j++;}
        else if (j==col2&&k==col1){d[i][j]=d[i][j]+a[i][k]*b[k][j];k=0;j=0;i++;}
        else {d[i][j]=d[i][j]+a[i][k]*b[k][j];k++;}
        
    matrixmult(a, b, d, row1, col1, col2);

    }

}

int main()
{
        int r1,i,j,col1,col2,k = 0;
        int a[50][50],b[50][50],c[50][50],d[50][50];
    
  
    printf("Enter the lenght of the first array row  \n");
    scanf("%d",&r1);
    printf("Enter the lenght of the first array row and column of second one \n");
    scanf("%d",&col1);
    printf("Enter the lenght of the second array row  \n");
    scanf("%d",&col2);
    printf(" Enter the first Array \n");
    for (i=0; i<r1; i++) {
        for (j=0; j<col1; j++) {
        printf("Enter a decimal for a[%d][%d]  ",i,j);
        scanf("%d",&a[i][j]);
        }
        
        }
    
    printf(" Enter the second Array \n");
    for (i=0; i<col1; i++) {
        for (j=0; j<col2; j++) {
            printf("Enter a decimal for b[%d][%d]  ",i,j);
            scanf("%d",&b[i][j]);
        }
        
    }
    for (i=0; i<r1; i++) {
        for (j=0; j<col1; j++) {
            c[i][j]=0;
            for (k=0; k<col2; k++) {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    
    printf("Multiplied array \n");
    for (i=0; i<r1; i++) {
        for (j=0; j<col2; j++) {
            printf("%d \t",c[i][j]);
        }
        printf("\n");
    }
        
   
    matrixmult(a,b,d,r1,col1,col2);

    printf("Multiplied array \n");
    for (i=0; i<r1; i++) {
        for (j=0; j<col2; j++) {
            printf("%d \t",d[i][j]);
        }
        printf("\n");
    }

}
