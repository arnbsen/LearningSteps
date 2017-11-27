//
//  spiral.c
//  programs
//
//  Created by Arnab Sen on 14/04/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>

int main()
{
    int mat[100][100];
    int a=0,b=0,c,i,j,k,l,m=0,n=0;
    int num=1,row1,col1;
    printf("Enter no of rows \n");
    scanf("%d",&row1);
    printf("Enter the no of columns \n");
    scanf("%d",&col1);
    
    
    for (i=0; i<row1/2; i++) {
        for (j=b; j<col1-b; j++) {
            mat[a][j]=num++;
        }
        a++;
        for (k=a; k<row1-a; k++) {
            mat[k][j-1]=num++;
        }
        for (l=col1-b-1; l>=b; l--) {
            mat[k][l]=num++;
        }
        b++;
        for (m=row1-(a+1); m>=a; m--) {
            mat[m][l+1]=num++;
        }
        
        
    }
    if (row1%2&&col1%2&&row1==col1) {
        mat[row1/2][col1/2]=num;
        
    }
    

    
    printf("Spiral \n");
    for (i=0; i<row1; i++) {
        for (j=0; j<col1; j++) {
            printf("%d \t",mat[i][j]);
        }
        printf("\n");
    }

    
    

}