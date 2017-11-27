//
//  2darraysort.c
//  programs
//
//  Created by Arnab Sen on 10/04/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>

int main()
{

    int a[20][20];
    int i,j,k,l,m=0,n,row1,col1,temp;
    int minr,minc,dr,dc;
    
    printf("Enter the lenght of the first array row  \n");
    scanf("%d",&row1);
    printf("Enter the lenght of the first array row and column of second one \n");
    scanf("%d",&col1);
    for (i=0; i<row1; i++) {
        for (j=0; j<col1; j++) {
            printf("Enter a decimal for a[%d][%d]  ",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }
    // Selection Sort //
    
    dr=row1;dc=col1;
    for (k=0; k<dr; k++) { // Index Seclector Row. //
        for (l=0; l<dc; l++) { // Index Selector Column. //
            m=a[k][l];minr=k;minc=l;n=l; // Resetting Start Column evaluation for first run. //
            for (i=k; i<row1; i++) {
                for (j=n; j<col1; j++) {
                    if (m>a[i][j]) {
                    m=a[i][j];minr=i;minc=j;
                    }
                }
                n=0; // Resetting Column for Next Runs. //
            }
            temp=a[k][l];a[k][l]=m;a[minr][minc]=temp;
        }
    }
    
    printf("Sorted Array \n");
        for (i=0; i<row1; i++) {
            for (j=0; j<col1; j++) {
                printf("%d \t",a[i][j]);
            }
            printf("\n");
        }



    
}